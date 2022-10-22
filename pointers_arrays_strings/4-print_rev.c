#include "main.h"

/**
 * @s: 1st argument char type
 * main: function that prints a string in reverse
 * Return: n
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	};
	_putchar('\n');
}
