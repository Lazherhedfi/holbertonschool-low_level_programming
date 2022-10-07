#include <stdlib.h>
#include "main.h"
/**
 * _isupper - uppercase
 * @i: int
 * Return: 0
 */
int _isupper(int i)

{

	char a;

	for (a = 'A'; a <= 'Z' ; a++)
{
	if (a == i)
	return (1);
}
	return (0);
}
