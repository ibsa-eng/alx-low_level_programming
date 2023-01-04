/*
 * 3-factorial.c
 * Auth:ibsa
 */

#include "main.h"

/**
 * factorial-returns factorial of given number
 * @n:the number to find the factorial of n
 *
 * Return:if n>0-the factorial n
 *     if n<0-1 to indicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
