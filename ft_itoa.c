/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:32:49 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 18:46:44 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digit(long n)
{
	int	i;

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

static void	ft_putstrr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

static void	fill_print(int countd, int i, long n, char *c)
{
	if (n < 0)
	{
		c[0] = '-';
		n = -n;
		i = 1;
	}
	c[countd] = '\0';
	while (countd > i)
	{
		c[countd - 1] = n % 10 + '0';
		n = n / 10;
		countd--;
	}
	ft_putstrr(c);
}

int	ft_itoa(int x)
{
	int		countd;
	char	*c;
	int		i;
	long	n;

	n = (long)x;
	countd = count_digit(n);
	c = (char *)malloc(countd + 1);
	i = 0;
	if (!c)
	{
		free(c);
		return (-1);
	}
	fill_print(countd, i, n, c);
	free(c);
	return (countd);
}
