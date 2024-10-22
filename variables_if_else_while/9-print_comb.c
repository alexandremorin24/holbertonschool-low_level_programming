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
int numberz = '0';

for (numberz = '0'; numberz <= '9'; numberz++)
{
	putchar(numberz);
		if (numberz == '9')
		{
		break;
		} else
		{
		putchar(',');
		putchar(' ');
		}
}
	putchar('\n');

	return (0);
}
