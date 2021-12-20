/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:53:39 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/20 19:11:00 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *ft, ...);
int		ft_flag(char *format, va_list args);
int		ft_check_next(char *format);
char	*ft_check_char(const char *ft, int c);
int		ft_char(int c);
char	ft_string(char *s);

int 	ft_unsigned(unsigned int n);
char	*ft_str_unsigned(unsigned int n);
int		ft_unsigned_length(unsigned int n);

int		ft_number(int n);
char	*ft_itoa(int n);
void	ft_putnumber(long number, int c, char *s);
int		ft_length(long int n);

int		ft_hex(unsigned int number);
int		ft_hex_length(unsigned int n);
int		ft_puthex_x(unsigned int number);
int		ft_puthex_upper(unsigned int number);

int		ft_pointer_length(unsigned long long number);
int		ft_pointer(unsigned long long int p);

#endif
