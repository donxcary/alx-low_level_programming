#include  "main.h"

/**
  *_islower -  a function that checks for lowercase character
  * c: is the char to be checked
  *Return: 1 if chra lowercase, otherwise 0.
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}

