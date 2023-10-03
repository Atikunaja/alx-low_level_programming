#ifndef MAIN_H_
#define MAIN_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
int main(int argc, char *argv[]);

#endif
