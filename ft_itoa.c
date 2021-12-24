/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:49:16 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/24 21:01:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length(long int n)
{
	int		length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

void	ft_putnumber(long number, int count, char *s)
{
	if (number < 0)
	{
		s[0] = '-';
		number = -number;
		s++;
		s[count] = 0;
	}
	while (--count >= 0)
	{
		s[count] = (number % 10) + '0';
		number = number / 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	char			*str;
	long			number;

	number = n;
	length = ft_length(number);
	if (number < 0)
	{
		str = malloc(sizeof(char) * (length + 2));
		if (!str)
			return (0);
	}
	else
	{
		str = malloc(sizeof(char) * (length + 1));
		if (!str)
			return (0);
		str[length] = 0;
	}
	ft_putnumber(number, length, str);
	return (str);
}

int	ft_number(int n)
{
	char	*number;
	int		length;

	length = 0;
	number = ft_itoa(n);
	length = ft_string(number);
	free(number);
	return (length);
}
