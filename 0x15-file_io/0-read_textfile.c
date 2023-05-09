#include "main.h"

/**
 * read_textfile - start point
 * @filename: input
 * @letters: input
 *
 * Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char buffer[1024 * 8];
ssize_t n;
if (!filename || !letters)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
n = read(file, &buffer[0], letters);
n = write(STDOUT_FILENO, &buffer[0], n);
close(file);
return(0);
}
