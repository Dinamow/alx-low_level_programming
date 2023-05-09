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
char buf[1024];
ssize_t fd;
ssize_t w;
ssize_t t;
if (!filename || !letters)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

t = read(fd, &buf[0], letters);
w = write(STDOUT_FILENO, &buf[0], t);

free(buf);
close(fd);
return (t);
}
