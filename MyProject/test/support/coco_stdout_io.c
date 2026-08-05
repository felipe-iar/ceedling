/**
 * CSpy-only CoverageScanner custom I/O (IAR + semihosting).
 *
 * Dumps the .csexe execution report to stdout with markers for the CSpyBat
 * console. A Ceedling post-fixture hook (tools/cspy_extract_csexe.rb) scrapes
 * those markers into <exe>.csexe. Host fopen is skipped — CSpyBat blocks it
 * as "unsafe" semihosting by default.
 *
 * See: https://doc.qt.io/coco/customizing-i-o-of-coveragescanner-library.html
 */
#include "coco_stdout_io.h"

#if defined(__ICCARM__) && defined(__COVERAGESCANNER__)

#include <stdio.h>

#define COCO_CSEXE_BEGIN "\n===COCO_CSEXE_BEGIN===\n"
#define COCO_CSEXE_END   "\n===COCO_CSEXE_END===\n"

/* Non-NULL sentinel stream; all bytes go to stdout only. */
static void *const coco_stdout_stream = (void *)1;

static int csfputs(const char *s, void *stream)
{
    (void)stream;
    return fputs(s, stdout);
}

static void *cs_open(const char *path)
{
    (void)path;
    fputs(COCO_CSEXE_BEGIN, stdout);
    fflush(stdout);
    return coco_stdout_stream;
}

static void *csfopenappend(const char *path)
{
    return cs_open(path);
}

static void *csfopenwrite(const char *path)
{
    return cs_open(path);
}

static int csfclose(void *stream)
{
    (void)stream;
    fputs(COCO_CSEXE_END, stdout);
    fflush(stdout);
    return 0;
}

void coco_stdout_io_init(void)
{
    static int installed;

    if (installed)
        return;
    installed = 1;

    __coveragescanner_set_custom_io(
        NULL,
        csfputs,
        csfopenappend,
        NULL,
        csfopenwrite,
        csfclose,
        NULL);

    __coveragescanner_filename("test_Demo");
}

void coco_stdout_io_save(void)
{
    __coveragescanner_save();
}

#endif /* __ICCARM__ && __COVERAGESCANNER__ */
