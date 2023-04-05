#include "main.h"
/**
 * factorial(int n)- returns factorial of a given number.
 * @n: factorial of a given number
 * Return: factorial of n
 */
int factorial(int n)
{
int n;
if (n == 0)
return (1);
else
(n < 0)
return (-1);
return (n * factorial(n - 1));
}
