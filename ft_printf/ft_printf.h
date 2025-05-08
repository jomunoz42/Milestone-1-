/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 10:45:45 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/08 18:36:24 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int	ft_putchar_count(char c);
int	ft_putstr_count(char *s);
int	ft_putnbr_count(long n);
int	ft_putunbr_count(long n);
int	ft_hexa_lower(unsigned int n);
int	ft_hexa_upper(unsigned int n);
int	ft_hexa_lower_p(size_t n);
int	ft_pointer_hexa(void *n);
int	printf_type(char s, va_list args);
int	is_valid_specifier(char c);
int	ft_printf(const char *format, ...);

#endif