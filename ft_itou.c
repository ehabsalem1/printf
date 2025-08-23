/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:04:33 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 19:01:14 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	count_digitt(long n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	ft_putstrrr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

static void	fill_printu(unsigned int countd, unsigned int i, long n, char *c)
{
	c[countd] = '\0';
	while (countd > i)
	{
		c[countd - 1] = n % 10 + '0';
		n = n / 10;
		countd--;
	}
	ft_putstrrr(c);
}

int	ft_itou(unsigned int x)
{
	unsigned int	countd;
	char			*c;
	unsigned int	i;
	unsigned long	n;

	n = (unsigned long)x;
	countd = count_digitt(n);
	c = (char *)malloc(countd + 1);
	i = 0;
	if (!c)
	{
		free(c);
		return (-1);
	}
	fill_printu(countd, i, n, c);
	free(c);
	return (countd);
}
