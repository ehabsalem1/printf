/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:53:33 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 19:13:55 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_itoxx(unsigned long x)
{
	char			*base;
	unsigned int	sum;

	sum = 0;
	base = "0123456789abcdef";
	if (x >= 16)
		sum += ft_itoxx(x / 16);
	sum += ft_putchar(base[x % 16]);
	return (sum);
}

int	ft_itop(unsigned long n)
{
	int	count;

	count = 0;
	if (!n)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_itoxx(n);
	return (count);
}
