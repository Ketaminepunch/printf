/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 20:30:34 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 18:26:10 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	res;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * neg));
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
	check_int_case("ft_atoi(\"42\")", ft_atoi("42"), atoi("42"));
	check_int_case("ft_atoi(\" \\t\\n\\r\\v\\f-123x\")",
		ft_atoi(" \t\n\r\v\f-123x"), atoi(" \t\n\r\v\f-123x"));
	check_int_case("ft_atoi(\"+17\")", ft_atoi("+17"), atoi("+17"));
	check_int_case("ft_atoi(\"--12\")", ft_atoi("--12"), atoi("--12"));
	check_int_case("ft_atoi(\"0\")", ft_atoi("0"), atoi("0"));
	check_int_case("ft_atoi(\"2147483648\")", ft_atoi("2147483648"),
		atoi("2147483648"));
	print_result();
	return (g_fails != 0);
}
*/