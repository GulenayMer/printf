/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:00:53 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/18 21:10:59 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_x(unsigned int number)
{
	if (number > 15)
		ft_puthex_x(number / 16);
	if (number % 16 > 9)
		ft_char(number % 16 + 87);
	else
		ft_char(number % 16 + '0');
	return(number);
}

int	ft_puthex_upper(unsigned int number)
{
	if (number > 15)
		ft_puthex_upper(number / 16);
	if (number % 16 > 9)
		ft_char(number % 16 + 55);
	else
		ft_char(number % 16 + '0');
	return(number);
}

int	ft_pointer(unsigned long int p)
{
	if (p > 15)
		ft_pointer(p / 16);
	if (p % 16 > 9)
		ft_char((p % 16) + 87);
	else
		ft_char((p % 16) + '0');
	return(p);
}
