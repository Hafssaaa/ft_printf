/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 22:20:00 by hherba            #+#    #+#             */
/*   Updated: 2021/12/29 23:27:46 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_nbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	ft_print_nbr(int nb)
{
	long	nbr;
	int		l;

	nbr = nb;
	l = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_print_char('-');
		l++;
	}
	if (nbr < 10)
		ft_print_char(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return (count_nbr(nbr) + l);
}
