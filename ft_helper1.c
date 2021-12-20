/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:24 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/20 18:23:13 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}

char	ft_string(char *s)
{
	int i;

	i = 0;
	if (!s)
	{
		s = "(null)";
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return(i);
}

/* d - i --  int */


/* int	ft_putnumber(int long number)
{
	int length;

	length = 0;
	if (number < 10 && number >= 0)
	{
		ft_char(number + '0');
		length += ft_count_number(number);

	}
	else if (number >= 10)
	{
		ft_putnumber(number / 10);
		ft_char((number % 10) + '0');
		length += ft_count_number(number);
		if (number < 0)
			ft_char('-');
	}
	else
	{
		ft_char('-');
		ft_putnumber(number * (-1));
		length += ft_count_number(number);
	}
	return(length);
} */

/* U -- unsigned int */
/* int	ft_putnumber_u(unsigned int u)
{
	if (u < 10)
		ft_char(u + '0');
	else if (u >= 10)
	{
		ft_putnumber(u / 10);
		ft_char((u % 10) + '0');
	}
	return(1);
}
 */