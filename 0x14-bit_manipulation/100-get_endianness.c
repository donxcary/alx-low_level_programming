#include <stdio.h>
#include "main.h"

/**
* get_endianness - checks the order of bytes in memory of the machine
* 
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int data = 0x98765432;
	unsigned char *c = (unsigned char *)&data;

if (*c == 0x32)
		return (1);
	else
return (0);
}