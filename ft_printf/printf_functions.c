/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:39:05 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/08 18:37:37 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_count(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_count(char *s)
{
	int	count;

	count = 0;
	if (!s)
		s = "(null)";
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}

int	ft_putnbr_count(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar_count('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr_count(n / 10);
	count += ft_putchar_count((n % 10) + '0');
	return (count);
}

int	ft_putunbr_count(long n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_count(n / 10);
	count += ft_putchar_count((n % 10) + '0');
	return (count);
}
