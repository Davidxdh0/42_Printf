/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:28 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/16 17:16:30 by dyeboa        ########   odam.nl         */
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
int ft_printf(const char *, ...);
int	ft_parse(va_list ap, const char str);

//printf_utils.c
int	ft_putchar(char c);
#endif
