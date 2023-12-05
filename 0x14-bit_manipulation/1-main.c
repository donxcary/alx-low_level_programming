#include <stdio.h>
#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
int flag = 0;
    int main(void)
{
    print_binary(0);
    printf("\n");

    print_binary(1);
    printf("\n");

    print_binary(98);
    printf("\n");

    print_binary(1024);
    printf("\n");

    print_binary((1 << 10) + 1);
    printf("\n");

    return (0);
}

 /**
 * main - check the code
 *
 * Return: Always 0.
 */
