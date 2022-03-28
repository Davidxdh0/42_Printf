/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:14:22 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/28 18:13:02 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list ap, const char str)
{
	int	c;

	c = 0;
	if (str == 'c')
		c += ft_putchar(va_arg(ap, int));
	if (str == 's')
		c += ft_putstr(va_arg(ap, char *));
	if (str == 'd' || str == 'i')
		c += ft_putnbr(va_arg(ap, int));
	if (str == 'u')
		c += ft_putnbr(va_arg(ap, unsigned int));
	if (str == '%')
		c += ft_putchar('%');
	if (str == 'p')
	{
		c += ft_printf("0x");
		c += ft_base(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	if (str == 'x')
		c += ft_base(va_arg(ap, unsigned int), "0123456789abcdef");
	if (str == 'X')
		c += ft_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	va_end(ap);
	return (c);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		c;

	i = 0;
	c = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			c += ft_parse(ap, str[i + 1]);
			i++;
		}
		else
			c += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (c);
}
