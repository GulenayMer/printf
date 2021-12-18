/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:33:38 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/18 21:20:29 by mgulenay         ###   ########.fr       */
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
	if (*format == 'c')
		ft_char(va_arg(args, int));
	else if (*format == 's')
		ft_string(va_arg(args, char *));
	else if (*format == 'i' || *format == 'd')
		ft_putnumber(va_arg(args, long int));
	else if (*format == 'u')
		ft_putnumber_u(va_arg(args, unsigned int));
	else if (*format == 'x')
		ft_puthex_x(va_arg(args, unsigned int));
	else if (*format == 'X')
		ft_puthex_upper(va_arg(args, unsigned int));
	else if (*format == 'p')
	{
		ft_string("0x");
		ft_pointer(va_arg(args, unsigned long int));
	}
	else if (*format == '%')
		ft_char('%');
	return (0);
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


int main (void)
{
	int c;
	c = 'a';
	char d[10] = "abc";

	ft_printf("Hi %c\n%d\n", c, d);
    return (0);
}