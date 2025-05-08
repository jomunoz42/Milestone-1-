/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 10:34:32 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/08 18:37:47 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_type(char s, va_list args)
{
	if (s == 'c')
		return (ft_putchar_count(va_arg(args, int)));
	if (s == 's')
		return (ft_putstr_count(va_arg(args, char *)));
	if (s == 'd' || s == 'i')
		return (ft_putnbr_count(va_arg(args, int)));
	if (s == 'u')
		return (ft_putunbr_count(va_arg(args, unsigned int)));
	if (s == 'x')
		return (ft_hexa_lower(va_arg(args, unsigned int)));
	if (s == 'X')
		return (ft_hexa_upper(va_arg(args, unsigned int)));
	if (s == 'p')
		return (ft_pointer_hexa(va_arg(args, void *)));
	if (s == '%')
		return (ft_putchar_count('%'));
	return (-1);
}

int	is_valid_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'x'
		|| c == 'X' || c == 'p' || c == '%')
		return (1);
	return (0);
}
