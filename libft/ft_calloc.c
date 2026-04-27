/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:01:58 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 17:23:09 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
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
	unsigned char	*p;
	unsigned char	*ref;
	size_t			i;
	int				zeroed;

	p = ft_calloc(8, sizeof(unsigned char));
	ref = calloc(8, sizeof(unsigned char));
	check("ft_calloc(8, sizeof(unsigned char)) returns memory", p != NULL
		&& ref != NULL);
	zeroed = 1;
	i = 0;
	while (p && ref && i < 8)
		zeroed &= (p[i] == ref[i], p[i++] == 0);
	check("ft_calloc matches calloc zeroed bytes", zeroed);
	free(p);
	free(ref);
	p = ft_calloc(0, 8);
	check("ft_calloc(0, 8) returns safely", p != NULL || p == NULL);
	free(p);
	p = ft_calloc((size_t)-1, 2);
	check("ft_calloc((size_t)-1, 2) returns NULL on overflow", p == NULL);
	print_result();
	return (g_fails != 0);
}
*/