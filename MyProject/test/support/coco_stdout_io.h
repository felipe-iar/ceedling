/**
 * CSpy-only CoverageScanner custom I/O (IAR + semihosting).
 *
 * Active only when both __ICCARM__ and __COVERAGESCANNER__ are set, so the
 * MinGW (+ Coco) host flow keeps default file .csexe output unchanged.
 *
 * See: https://doc.qt.io/coco/customizing-i-o-of-coveragescanner-library.html
 */
#ifndef COCO_STDOUT_IO_H
#define COCO_STDOUT_IO_H

#if defined(__ICCARM__) && defined(__COVERAGESCANNER__)
void coco_stdout_io_init(void);
void coco_stdout_io_save(void);
#else
#define coco_stdout_io_init() ((void)0)
#define coco_stdout_io_save() ((void)0)
#endif

#endif /* COCO_STDOUT_IO_H */
