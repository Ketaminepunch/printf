/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:47:42 by vsack             #+#    #+#             */
/*   Updated: 2026/04/23 22:50:20 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unint(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_print_unint(n / 10);
	ft_print_char((n % 10) + '0');
	count++;
	return (count);
}
