/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:00:53 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/22 18:50:02 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_length(unsigned int n)
{
	int length;

	length = 0;
	while(n != 0)
	{
		n = n / 16;
		length++;
	}
	return (length);
}

int	ft_puthex_x(unsigned int number)
{
	if (number > 15)
		ft_puthex_x(number / 16);
	if (number % 16 > 9)
		ft_char(number % 16 + 87);
	else
		ft_char(number % 16 + '0');
	return(ft_hex_length(number));
}


int	ft_puthex_upper(unsigned int number)
{
	if (number > 15)
		ft_puthex_upper(number / 16);
	if (number % 16 > 9)
		ft_char(number % 16 + 55);
	else
		ft_char(number % 16 + '0');
	return(ft_hex_length(number));
}

int ft_pointer_length(unsigned long number)
{
	int length;

	length = 0;
	while (number != 0)
	{
		number = number / 16;
		length++;
	}
	return (length);
}

int	ft_pointer(unsigned long int p)
{
	if (p > 15)
		ft_pointer(p / 16);
	if (p % 16 > 9)
		ft_char((p % 16) + 87);
	else
		ft_char((p % 16) + '0');
	return(ft_pointer_length(p));
}
