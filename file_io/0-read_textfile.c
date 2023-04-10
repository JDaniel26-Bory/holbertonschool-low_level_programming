#include "main.h"

/**
 * read_textfile -  function for the print text file
 * @filename: pointer of function
 * @letters: size of letters
 * Return: number of characteres
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f, l, w;
char *buf;

buf = malloc(letters);
if (buf == 0)
	return (0);
if (filename == NULL)
	return (0);
f = open(filename, O_RDONLY);
if (f == -1)
{
	free(buf);
	return (0);
}
l = read(f, buf, letters);
w = write(STDOUT_FILENO, buf, l);
close(f);
return (w);
}
