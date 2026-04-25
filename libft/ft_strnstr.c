/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 20:04:46 by vsack             #+#    #+#             */
/*   Updated: 2026/04/20 20:27:10 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (l[0] == '\0')
		return ((char *)b);
	while (b[i] && i < len)
	{
		j = 0;
		while ((b[i + j] == l[j]) && (i + j) < len)
		{
			if (l[j + 1] == '\0')
				return ((char *)&b[i]);
			j++;
		}
		i++;
	}
	return (0);
}
