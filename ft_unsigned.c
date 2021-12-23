/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:49:16 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/23 22:03:53 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_unsigned_length(unsigned int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_str_unsigned(unsigned int n)
{
	char	*str;
	int		length;

	length = ft_unsigned_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
		if (!str)
			return (0);
		str[length] = '\0';
	while(length >= 0)
	{
		str[length - 1] = (n % 10) + '0';
		n = n / 10;
		length--;
	}
	return (str);
} 


int ft_unsigned(unsigned int n)
{
	int		length;
	char	*number;

	number = ft_str_unsigned(n);
	length = 0;
	length += ft_string(number);
	free(number);
	return(length);
}