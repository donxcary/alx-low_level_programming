#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);
unsigned int num_digits(unsigned int num);
unsigned int power(unsigned int a, unsigned int b);
unsigned int _atoi(const char *s);
unsigned long int powr(unsigned long int a, unsigned long int b);
unsigned long int print_bin(unsigned long int n);

#endif