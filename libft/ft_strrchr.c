/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:19:28 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 18:42:01 by vsack            ###   ########.fr       */
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

/*
#include "libft.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int	g_fails;
static int	g_total;

static void	check(const char *label, int ok)
{
	g_total++;
	if (!ok)
		g_fails++;
	printf("[%d] %s: %s\n", g_total, ok ? "ok" : "fail", label);
}

static void	check_int_case(const char *label, long got, long want)
{
	g_total++;
	if (got != want)
		g_fails++;
	printf("[%d] %s: %s (got=%ld want=%ld)\n", g_total,
		got == want ? "ok" : "fail", label, got, want);
}

static void	check_str_case(const char *label, const char *got, const char *want)
{
	g_total++;
	if (strcmp(got, want) != 0)
		g_fails++;
	printf("[%d] %s: %s (got=%s want=%s)\n", g_total, strcmp(got,
			want) == 0 ? "ok" : "fail", label, got, want);
}

static void	print_result(void)
{
	printf("fails: %d/%d\n", g_fails, g_total);
}

int	main(void)
{
	const char	*s;

	s = "banana";
	check("ft_strrchr finds last 'a' like strrchr", ft_strrchr(s,
			'a') == strrchr(s, 'a'));
	check("string search finds terminating NUL like libc", ft_strrchr(s,
			'\0') == strrchr(s, '\0'));
	check("ft_strrchr returns NULL for missing char", ft_strrchr(s,
			'z') == NULL);
	print_result();
	return (g_fails != 0);
}
*/
