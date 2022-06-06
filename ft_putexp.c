/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 04:00:05 by hherba            #+#    #+#             */
/*   Updated: 2021/12/20 18:48:39 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putexp(char c, va_list arg)
{
	if (c == 's')
		return (ft_print_str(va_arg(arg, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(arg, int)));
	else if (c == 'c')
		return (ft_print_char(va_arg(arg, char)));
	else if (c == 'u')
		return (ft_print_unbr(va_arg(arg, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(arg, unsigned int)));
	else if (c == 'p')
		return (ft_print_adr(va_arg(arg, unsigned long long)));
	else
		return (write(1, &c, 1));
}
