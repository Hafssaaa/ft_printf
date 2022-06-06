/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 03:41:08 by hherba            #+#    #+#             */
/*   Updated: 2021/12/29 23:28:05 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_unbr(unsigned int nbr)
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

int	ft_print_unbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_print_char(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return (count_unbr(nbr));
}
