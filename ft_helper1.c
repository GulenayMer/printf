/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:24 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/18 21:13:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	write(1, &c, 1);
	return(c);
}

char	ft_string(char *s)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_char(*s++);
	}
	return(*s);
}

/* d - i --  int */
int	ft_putnumber(int long number)
{
	if (number < 10 && number >= 0)
	{
		ft_char(number + '0');
	}
	else if (number >= 10)
	{
		ft_putnumber(number / 10);
		ft_char((number % 10) + '0');
		if (number < 0)
			ft_char('-');
	}
	else
	{
		ft_char('-');
		ft_putnumber(number * (-1));
	}
	return(number);
}

/* U -- unsigned int */
int	ft_putnumber_u(unsigned int u)
{
	if (u < 10)
		ft_char(u + '0');
	else if (u >= 10)
	{
		ft_putnumber(u / 10);
		ft_char((u % 10) + '0');
	}
	return(u);
}
