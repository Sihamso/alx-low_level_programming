#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return: the length
 */
int _strlen_recursion(char *s)
{
char *s;
int length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}

return (the length);
}
