/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:19:28 by vsack             #+#    #+#             */
/*   Updated: 2026/04/21 19:08:03 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	match;
	int		i;

	i = ft_strlen(s);
	match = (char)c;
	while (i >= 0)
	{
		if (s[i] == match)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
