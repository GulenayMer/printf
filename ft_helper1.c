/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:24 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/23 18:25:11 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* count = write(fd, *buff, size); write returns the number of characters
written  */
int	ft_char(int c)
{
	int count;
	count = write(1, &c, 1);
	return (count);
}

char	ft_string(char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
 	if (!s)
	{
		s = "(null)";
		while (s[i])
		{
			count += ft_char(s[i]);
			i++;
		}
	}
	while (s[i] != '\0')
	{
		count += ft_char(s[i]);
		i++;
	}
	return(count);
}

int ft_percentage(int c)
{
	c = '%';
	ft_char(c);
	return (1);
}
