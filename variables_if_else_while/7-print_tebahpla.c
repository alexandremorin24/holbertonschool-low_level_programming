#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: This program print the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;


for (c = 'z'; c <= 'a'; c--)
{
	putchar(c);
}
	putchar('\n');

	return (0);
}
