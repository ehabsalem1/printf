/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalem <isalem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:41:07 by isalem            #+#    #+#             */
/*   Updated: 2025/08/23 19:14:07 by isalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	handler(char c, va_list pa);
int	ft_itoa(int x);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itou(unsigned int x);
int	ft_itop(unsigned long n);
int	ft_itox(unsigned int x, char ch);

#endif
