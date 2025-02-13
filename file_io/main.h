#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>

void close_file(int file_desc);
void error98(char *filename);
void error99(char *filename);
void subfunc_copy(char *file_from, char *file_to);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */
