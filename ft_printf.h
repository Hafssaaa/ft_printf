/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:50:30 by hherba            #+#    #+#             */
/*   Updated: 2021/12/29 23:34:26 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_str(char *str);
int	ft_print_nbr(int nb);
int	ft_print_char(char c);
int	ft_print_hexa(unsigned long long nbr, char c);
int	ft_print_unbr(unsigned int nb);
int	ft_print_adr(unsigned long long nb);
int	ft_printf(const char *format, ...);

#endif
