#ifndef PUTIN
#define PUTIN
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
