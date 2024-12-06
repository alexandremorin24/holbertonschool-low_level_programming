#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*3-cp.c*/
void open_files(char *argv[], int *fd_from, int *fd_to);
void copy_and_close(int fd_from, int fd_to, char *argv[]);
int main(int argc, char *argv[]);

#endif
