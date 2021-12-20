/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:38 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/20 19:05:39 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_check_char(const char *ft, int c)
{
	char	*format;
	int		i;

	format = (char *)ft;
	i = 0;
	while (format[i])
	{
		if (format[i] == c)
		{
			return (&format[i]);
		}
		i++;
	}
	if (c == 0)
	{
		return (&format[i]);
	}
	return (0);
}

int	ft_check_next(char *format)
{
	char	*identifiers;

	identifiers = "csdiupxX%";
	if (ft_check_char(identifiers, *(format + 1)))
	{
		return (1);
	}
	return (0);
}

int	ft_flag(char *format, va_list args)
{
	int length;
	
	length = 0;
	if (*format == 'c')
		length += ft_char(va_arg(args, int));
	else if (*format == 's')
		length += ft_string(va_arg(args, char *));
	else if (*format == 'i' || *format == 'd')
		length += ft_number(va_arg(args, int));
	else if (*format == 'u')
		length += ft_unsigned(va_arg(args, unsigned int));
    else if (*format == 'x')
		length += ft_puthex_x(va_arg(args, unsigned int));
	else if (*format == 'X')
		length += ft_puthex_upper(va_arg(args, unsigned int));
	else if (*format == 'p')
	{
		length += ft_string("0x");
		length += ft_pointer(va_arg(args, unsigned long long int));
	}
	else if (*format == '%')
		length += ft_char('%');
	return (length);
}

int	ft_printf(const char *ft, ...)
{
	va_list	args;
	int		length;
	char	*format;

	va_start(args, ft);
	format = (char *)ft;
	length = 0;
	while (*format)
	{
		if (*format == '%' && ft_check_next(format))
		{
			format++;
			length += ft_flag(format++, args);
		}
		else
			length += ft_char(*format++);
	}
	va_end(args);
	return (length);
}
