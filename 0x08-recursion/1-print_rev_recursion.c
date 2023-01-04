/*
 * File:1-print_rev_recursion.c
 * Auth:ibsa
 */
#include "main.h"

/**
 *_print_rev_recursion-print string in reverse order
 *@s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
