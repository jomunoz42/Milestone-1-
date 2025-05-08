/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:37:25 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/08 22:06:38 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	if_count_is_valid(int count)
{
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == '\0')
			return (va_end(args), -1);
		if (*format == '%')
		{
			if (*format++ && is_valid_specifier(*format) == 1)
				count += printf_type(*format, args);
			else if (*format)
				count += ft_putchar_count('%') + ft_putchar_count(*format);
		}
		else
			count += ft_putchar_count(*format);
		++format;
	}
	va_end(args);
	return (if_count_is_valid(count));
}
