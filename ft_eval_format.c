/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:11:15 by vsack             #+#    #+#             */
/*   Updated: 2026/04/24 15:28:58 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_eval_format(const char c, va_list ap)
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
