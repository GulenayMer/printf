/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:38 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/26 17:31:09 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_string(char *s)
{
	int	i;
	int	count;

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
	return (count);
}

int	ft_flag(char format, va_list args)
{
	int		length;

	length = 0;
	if (format == 'c')
		length += ft_char(va_arg(args, int));
	else if (format == 's')
		length += ft_string(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		length += ft_number(va_arg(args, int));
	else if (format == 'u')
		length += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		length += ft_puthex_x(va_arg(args, unsigned int));
	else if (format == 'X')
		length += ft_puthex_upper(va_arg(args, unsigned int));
	else if (format == 'p')
	{
		length += ft_string("0x");
		length += ft_pointer(va_arg(args, unsigned long long));
	}
	else if (format == '%')
		length += ft_char('%');
	return (length);
}

int	ft_printf(const char *ft, ...)
{
	va_list	args;
	int		length;
	char	*format;
	int		i;

	va_start(args, ft);
	format = (char *)ft;
	length = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += ft_flag(format[i + 1], args);
			i++;
		}
		else
			length += ft_char(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
