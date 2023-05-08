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
int length, chars;
char *buf;

if (filename == NULL || letters == 0)
return (0);
buf = malloc(sizeof(char) * (letters));
if (buf == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file == -1)
{
free(buf);
return (0);
}
length = read(file, buf, letters);
if (length == -1)
{
free(buf);
close(file);
return (0);
}

chars = write(STDOUT_FILENO, buf, length);

free(buf);
close(file);
if (chars != length)
return (0);
return (length);
}
