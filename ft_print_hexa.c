/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 03:25:31 by hherba            #+#    #+#             */
/*   Updated: 2022/01/09 02:30:56 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_hexa(unsigned long long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}

int	ft_print_hexa(unsigned long long nbr, char c)
{
	char	*s;

	if (c == 'x')
		s = "0123456789abcdef";
	else if (c == 'X')
		s = "0123456789ABCDEF";
	if (nbr < 16)
		ft_print_char(s[nbr]);
	else
	{
		ft_print_hexa(nbr / 16, c);
		ft_print_hexa(nbr % 16, c);
	}
	return (count_hexa(nbr));
}
