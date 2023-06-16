#include <stdio.h>

/**
 * main-prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void) 
{
	int x;

	for(x=97;x<123;x++)
	{
		putchar(x);
	}
	putchar('\n');
return (0);
}
