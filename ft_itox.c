/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:13:51 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 20:32:17 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itox(unsigned int x, char ch)
{
	char			*base;
	unsigned int	sum;
	unsigned long	n;

	n = (unsigned long)x;
	sum = 0;
	if (ch == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		sum += ft_itox(n / 16, ch);
	sum += ft_putchar(base[n % 16]);
	return (sum);
}
