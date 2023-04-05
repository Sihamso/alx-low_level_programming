#include "main.h"
/**
 * _puts_rev_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
Void _print_rev_recursion(char *s)
{
char *s;
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
