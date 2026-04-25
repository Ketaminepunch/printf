/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:43:34 by vsack             #+#    #+#             */
/*   Updated: 2026/04/25 17:02:53 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_number(int n);
int	ft_print_unint(unsigned int n);
int	ft_eval_format(const char c, va_list ap);
int	ft_print_hex(unsigned int n, char *base);
int	ft_print_ptr(unsigned long long n);

#endif
