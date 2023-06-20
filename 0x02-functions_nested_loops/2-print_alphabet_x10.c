#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/

void print_alphabet_x10(void)
{
	int i = 1;
	char ch = 'a';

	for (i; i < 10; i++)
	{
		for (ch; ch <= 'z; ch++')
		{
		_putchar(ch);
		}
	_putchar('\n');
	}

}
