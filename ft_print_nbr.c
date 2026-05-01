/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:28:28 by vsack             #+#    #+#             */
/*   Updated: 2026/04/30 13:15:58 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		if (write(1, "-", 1) == -1)
			return (0);
		nb = -nb;
		count++;
	}
	if (nb > 9)
		count += (ft_print_number(nb / 10));
	ft_print_char((nb % 10) + '0');
	count++;
	return (count);
}
