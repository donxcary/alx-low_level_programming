/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin_2;
	unsigned long int bin = print_bin(n);
	unsigned int digits = num_digits(bin);
	int num = (n >> index);

	if (digits < index || digits == 0)
	{
		return (-1);
	}
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bin_2 = print_bin(num);
	num = bin_2 % 10;
	return (num);
}
