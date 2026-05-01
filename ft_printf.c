/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:45:35 by vsack             #+#    #+#             */
/*   Updated: 2026/05/01 17:42:55 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_eval_format(const char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (c == 's')
		count += ft_print_string(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count += ft_print_number(va_arg(ap, int));
	else if (c == '%')
		count += ft_print_char('%');
	else if (c == 'u')
		count += ft_print_unint(va_arg(ap, unsigned int));
	else if (c == 'x')
		count += ft_print_hex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
		count += ft_print_ptr(va_arg(ap, unsigned long long));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	i = -1;
	va_start(ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			count += ft_eval_format(format[++i], ap);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int		ft_count;
	int		std_count;
	char	*ptr;

	ptr = "123HALLO123";
	// Test 1: Basic String
	printf("--- Test 1: Basic String ---\n");
	std_count = printf("STD: Hello %s, today is %d.\n", "World", 42);
	ft_count = ft_printf(" FT: Hello %s, today is %d.\n", "World", 42);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 2: Edge Case (NULL string)
	printf("--- Test 2: NULL String ---\n");
	std_count = printf("STD: NULL string is %s\n", (char *)NULL);
	ft_count = ft_printf(" FT: NULL string is %s\n", (char *)NULL);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 3: The bare '%' test
	printf("--- Test 3: Bare Modulo ---\n");
	std_count = printf("STD: 100%%\n");
	ft_count = ft_printf(" FT: 100%%\n");
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 4: Pointer
	printf("--- Test 4: Pointer ---\n");
	std_count = printf("STD: %p\n", ptr);
	ft_count = ft_printf(" FT: %p\n", ptr);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 5: NULL Pointer
	printf("--- Test 5: NULL Pointer ---\n");
	ptr = NULL;
	std_count = printf("%p\n", ptr);
	ft_count = ft_printf("%p\n", ptr);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 6: Hexadecimal
	printf("--- Test 6: Hexadecimal ---\n");
	std_count = printf("STD: %x %X\n", -1, -1);
	ft_count = ft_printf(" FT: %x %X\n", -1, -1);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 7: Integer
	printf("--- Test 7: Integer ---\n");
	std_count = printf("STD: %i %d\n", INT_MIN, INT_MAX);
	ft_count = ft_printf(" FT: %i %d\n", INT_MIN, INT_MAX);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 8: Unsigned Int
	printf("--- Test 8: Unsigned Int ---\n");
	std_count = printf("STD: %u %u\n", INT_MIN, INT_MAX);
	ft_count = ft_printf(" FT: %u %u\n", INT_MIN, INT_MAX);
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	// Test 9: trailing %
	printf("--- Test 9: trailing percent ---\n");
	std_count = printf("%");
	ft_count = ft_printf("%");
	printf("[Return check] STD: %d | FT: %d ", std_count, ft_count);
	if (std_count == ft_count)
		printf("->  MATCH\n\n");
	else
		printf("->  FAIL\n\n");
	return (0);
}
*/