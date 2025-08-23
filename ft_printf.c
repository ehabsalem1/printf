/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:44:21 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 22:27:14 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nnn(const char *s, va_list pa, int x, int count)
{
	int	p;

	p = 0;
	while (s[x])
	{
		if (s[x] == '%' && s[x + 1])
		{
			p = handler(s[x + 1], pa);
			if (p == -1)
				return (-1);
			count += p;
			x++;
		}
		else
		{
			write(1, &s[x], 1);
			count++;
		}
		x++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	pa;
	int		x;
	int		count;

	if (!s)
		return (-1);
	va_start(pa, s);
	x = 0;
	count = 0;
	count = nnn(s, pa, x, count);
	va_end(pa);
	return (count);
}
