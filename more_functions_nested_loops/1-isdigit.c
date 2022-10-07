#include "main.h"
/**
 * _isdigit - 0 to 9
 * @i: int
 * Return: 0
 */
int _isdigit(int i)

{
	int a;

for (a = '0'; a <= '9'; a++)
{
if (a == i)
	return (1);
}
	return (0);
}
