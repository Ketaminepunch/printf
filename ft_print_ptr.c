/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 23:35:59 by vsack             #+#    #+#             */
/*   Updated: 2026/04/24 15:26:41 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_hex(unsigned long long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_pointer_hex(n / 16, base);
	count += ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_ptr(unsigned long long n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	if (n == 0)
	{
		(ft_putstr_fd("(nil)", 1));
		return (5);
	}
	write(1, "0x", 2);
	count = 2 + ft_pointer_hex(n, base);
	return (count);
}
