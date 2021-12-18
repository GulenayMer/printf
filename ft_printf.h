/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:53:39 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/18 21:15:33 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

char	*ft_check_char(const char *ft, int c);
char	ft_string(char *s);
int		ft_printf(const char *ft, ...);
int		ft_flag(char *format, va_list args);
int		ft_check_next(char *format);
int		ft_char(int c);
int		ft_putnumber(long int number);
int		ft_putnumber_u(unsigned int u);
int		ft_puthex_x(unsigned int number);
int		ft_puthex_upper(unsigned int number);
int		ft_pointer(unsigned long int p);

#endif
