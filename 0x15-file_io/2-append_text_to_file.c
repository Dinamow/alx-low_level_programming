#include "main.h"

/**
 * append_text_to_file - start point
 * @filename: input
 * @text_content: input
 *
 * Retrun: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
if (!filename)
return (-1);
if (!filename)
return (1);
FILE* ptr;
ptr = fopen("filename", "a");
if (!ptr)
return (-1);

while (*text_content)
{
fprintf(ptr ,"%s", *text_content);
text_content++;
}
fclose(ptr);
return (1);
}
