#include "main.h"

/**
* append_text_to_file - append text at the end of file.
* @filename: pointer to the name of file.
* @text_content: the string to be added to the end of file.
* return: if the function fails or filename is NULL - -1.
* if it fails - -1.
* if it works - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int a, b, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

a = open(filename, O_WRONLY | O_APPEND);
b = write(a, text_content, len);

if (a == -1 || b == -1)
return (-1);

close(a);

return (1);
}
