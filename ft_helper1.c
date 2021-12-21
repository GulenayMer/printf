/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:24 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/21 22:06:21 by mgulenay         ###   ########.fr       */
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

int ft_percentage(int c)
{
	c = '%';
	ft_char(c);
	return (1);
}
