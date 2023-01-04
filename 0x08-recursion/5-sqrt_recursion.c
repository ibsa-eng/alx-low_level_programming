/*
 * File:5-sqrt_recursion.c
 * Auth:ibsa
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt - finds the natural square root of input
 * @num:the numnber to find square root of
 * @root:thev root to be tested
 *
 * Return if the number has natural square root-th
 *   if the number doesnot have natural square root--1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns natural square root of
 * find_sqrt - Find square root of number
 * find_sqrt(n, root) - Find square root
 * @n:the number to return square root of
 *
 * Return:if n has natural square root-the natural s
 *    if n does not have natural square root--1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root)); 
}
