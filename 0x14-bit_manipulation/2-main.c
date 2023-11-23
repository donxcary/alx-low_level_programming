#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index of the bit to be returned
 * Return: value of the bit at index or -1 if an error occured
 */

int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);

    n = get_bit(98, 1);
    printf("%d\n", n);

    n = get_bit(1024, 0);
    printf("%d\n", n);

    return (0);
}

/**
*main - check the code
*
*Return: Always 0.
* /