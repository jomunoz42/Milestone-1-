/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_functions2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:26:40 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/06 22:15:15 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned int n)
{
	char	*hexa;
	int		count;

	count = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
		count += ft_hexa_lower(n / 16);
	count += ft_putchar_count(hexa[n % 16]);
	return (count);
}

int	ft_hexa_upper(unsigned int n)
{
	char	*hexa;
	int		count;

	count = 0;
	hexa = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_hexa_upper(n / 16);
	count += ft_putchar_count(hexa[n % 16]);
	return (count);
}

int	ft_hexa_lower_p(size_t n)
{
	char	*hexa;
	int		count;

	hexa = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_hexa_lower_p(n / 16);
	count += ft_putchar_count(hexa[n % 16]);
	return (count);
}

int	ft_pointer_hexa(void *n)
{
	int	count;

	count = 0;
	if (!n)
		return (ft_putstr_count("(nil)"));
	count += ft_putstr_count("0x");
	count += ft_hexa_lower_p((size_t)n);
	return (count);
}
