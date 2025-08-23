/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 18:58:29 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 19:14:18 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handler(char c, va_list pa)
{
	if (c == 'i' || c == 'd')
		return (ft_itoa(va_arg(pa, int)));
	else if (c == 'u')
		return (ft_itou(va_arg(pa, unsigned int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(pa, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(pa, char *)));
	else if (c == 'x' || c == 'X')
		return (ft_itox(va_arg(pa, unsigned int), c));
	else if (c == 'p')
		return (ft_itop(va_arg(pa, unsigned long)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
