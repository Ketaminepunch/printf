/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:10:18 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 18:41:40 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	if (n == i)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
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
	check("comparison equal prefix matches libc", ft_strncmp("abc", "abd",
			2) == strncmp("abc", "abd", 2));
	check("ft_strncmp sign matches strncmp", (ft_strncmp("abc", "abd",
				3) < 0) == (strncmp("abc", "abd", 3) < 0));
	check("ft_strncmp with n = 0 returns 0", ft_strncmp("abc", "xyz", 0) == 0);
	print_result();
	return (g_fails != 0);
}
*/
