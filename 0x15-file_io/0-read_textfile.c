#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file
* @filename: text file to be read
* @letters: number of letters to be read
* Return: n- actual number of bytes read and printed
* 0 when function fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *s;
ssize_t u;
ssize_t n;
ssize_t t;

u = open(filename, O_RDONLY);
if (u == -1)
return (0);
s = malloc(sizeof(char) * letters);
t = read(u, s, letters);
n = write(STDOUT_FILENO, s, t);

free(s);
close(u);
return (n);
}
