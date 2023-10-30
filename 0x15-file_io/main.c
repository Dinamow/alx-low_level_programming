#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
