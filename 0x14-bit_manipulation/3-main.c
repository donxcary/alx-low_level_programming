#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index to set the value
 * Return: 1 if it worked, or -1 if an error occurred
 */

int main(void)
{
unsigned long int n;

    n = 1024;

    set_bit(&n, 5);
    printf("%lu\n", n);

    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);

    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);

    return (0);
}
