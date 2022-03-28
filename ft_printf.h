/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:28 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/28 18:19:22 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

//printf.c
int	ft_printf(const char *str, ...);
int	ft_parse(va_list ap, const char str);

//printf_utils.c
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_base(unsigned long n, char *base);
int	ft_pointer(int s, char *base);
#endif
