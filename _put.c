#include "main.h"

/**
 * _puts - prints a string with new line
 * @str: the string to print
 *
 * Return: void
 */
int _puts(char *str)
{
	char *b = str;

	while (*str)
		_putchar(*str++);
	return (str - b);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int j)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (j == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (j != BUF_FLUSH)
		buf[i++] = j;
	return (1);
}
