/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:26 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/28 18:22:07 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
		i++;
	return (i);
}

int	ft_putnbr(long n)
{
	int	counter_printed;

	counter_printed = 0;
	if (n < 0)
	{
		counter_printed += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		counter_printed += ft_putnbr(n / 10);
	counter_printed += ft_putchar(n % 10 + 48);
	return (counter_printed);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		i += ft_putstr("(null)");
	else
		while (s && s[i])
			ft_putchar(s[i++]);
	return (i);
}

int	ft_base(unsigned long n, char *base)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += ft_base(n / 16, base);
	counter += ft_putchar(base[n % 16]);
	return (counter);
}
