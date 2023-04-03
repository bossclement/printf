#include "main.h"

/**
 * print_low_hex - function that prints hexadecimal
 * @args: list of arguments
 * Return: the length of the string printed
 */

int print_low_hex(va_list args)
{
	char dummy_str[100];

	int_to_hex(va_arg(args, unsigned int), dummy_str, "0123456789abcdef");
	return (print_string(dummy_str));
}

/**
 * print_high_hex - function that prints hexadecimal
 * @args: list of arguments
 * Return: number
 */

int print_high_hex(va_list args)
{
	char dummy_str[100];

	int_to_hex(va_arg(args, unsigned int), dummy_str, "0123456789ABCDEF");
	return (print_string(dummy_str));
}

/**
 * print_address - function that prints address of the contents in memory
 * @args: list of arguments
 * Return: number
 */

int print_address(va_list args)
{
	char dummy_str[100];

	get_address(va_arg(args, int *), dummy_str);
	return (print_string(dummy_str));
}

/**
 * print_string - function that prints a string
 * @str: the string
 * Return: number
 */

int print_string(char *str)
{
	int i = 0, count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}

	return (count);
}
