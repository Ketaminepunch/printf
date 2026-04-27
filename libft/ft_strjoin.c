/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:40:34 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 18:40:06 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((total_len * sizeof(char)) + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
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
	char	*s;

	s = ft_strjoin("hello", " world");
	check("ft_strjoin allocates joined string", s != NULL);
	if (s)
		check_str_case("ft_strjoin(\"hello\", \" world\")", s, "hello world");
	free(s);
	s = ft_strjoin("", "world");
	check("ft_strjoin handles empty left string", s != NULL);
	if (s)
		check_str_case("ft_strjoin(\"\", \"world\")", s, "world");
	free(s);
	s = ft_strjoin("hello", "");
	check("ft_strjoin handles empty right string", s != NULL);
	if (s)
		check_str_case("ft_strjoin(\"hello\", \"\")", s, "hello");
	free(s);
	s = ft_strjoin("", "");
	check("ft_strjoin handles two empty strings", s != NULL);
	if (s)
		check_str_case("ft_strjoin(\"\", \"\")", s, "");
	free(s);
	print_result();
	return (g_fails != 0);
}
*/
