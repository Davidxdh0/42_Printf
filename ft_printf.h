/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:28 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/17 18:34:08 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

//printf.c
int 	ft_printf(const char *, ...);
int		ft_parse(va_list ap, const char str);

//printf_utils.c
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long n);
int		ft_putunsignednbr(unsigned int n);
size_t	ft_hexlen(int n);
int		ft_putnbrbase(int n, int base, int l);
size_t	ft_strlen(const char *s);
// void	ft_putvoidp(char s);
#endif
