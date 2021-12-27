/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:00:53 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/26 17:54:09 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length(unsigned int number)
{
	int	length;

	length = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 16;
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
	return (ft_hex_length(number));
}

int	ft_puthex_upper(unsigned int number)
{
	if (number > 15)
		ft_puthex_upper(number / 16);
	if (number % 16 > 9)
		ft_char(number % 16 + 55);
	else
		ft_char(number % 16 + '0');
	return (ft_hex_length(number));
}

int	ft_pointer_length(unsigned long long number)
{
	int		length;

	length = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 16;
		length++;
	}
	return (length);
}

int	ft_pointer(unsigned long long p)
{
	if (p == 0)
	{
		ft_char('0');
		return (1);
	}
	if (p > 15)
		ft_pointer(p / 16);
	if (p % 16 > 9)
	{	
		ft_char((p % 16) + 87);
	}
	else
	{	
		ft_char((p % 16) + '0');
	}
	return (ft_pointer_length(p));
}
