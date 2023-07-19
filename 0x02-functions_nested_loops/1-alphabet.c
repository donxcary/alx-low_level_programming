#include "main.h"

/**
  * print_alphabet - print all alphabet in lowercase
  */

void print_alphabet(void)
{
	char message;

	for (message = 'a'; message <= 'z'; message++)
		_putchar(message);

	_putchar('\n');
}
