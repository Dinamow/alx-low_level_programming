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
char* buff;
ssize_t fd;
ssize_t r;
ssize_t w;

if (!filename || letters)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buff = malloc(letters * sizeof(char));
r = read(fd, buff, letters);
if (r == -1)
return (0);
w = write(0, buff, r);
if (w == -1)
return (0);

free (buff);
close (fd);
return (w);
}
