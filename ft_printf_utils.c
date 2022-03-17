/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:26 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/17 18:33:55 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(long n)
{
	int counter_printed;

	counter_printed = 0;
	if (n < 0)
	{
		counter_printed += ft_putchar('-');
		n = -n;
	}
	if(n > 9)	
		counter_printed += ft_putnbr(n / 10);
	counter_printed += ft_putchar(n % 10 + 48);
	
	return (counter_printed);
}

int	ft_putunsignednbr(unsigned int n)
{
	int counter_printed;

	counter_printed = 0;
	if (n > 9)
		counter_printed += ft_putunsignednbr(n / 10);
	counter_printed += ft_putchar(48 + n % 10);
	return(counter_printed);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		ft_putchar(s[i++]);
	return (i);
}

// void	ft_putvoidp(char s)
// {
// 	char *k;
// 	int	i;

// 	k = &s;
// 	i = 0;
// 	if (k == NULL)
// 		return ;
// 	while (k[i] != '\0')
// 		ft_putchar(k[i++]);
// }

size_t	ft_hexlen(int n)
{
	int	len;

	len = 0;
	while (n && len++ < 0)
		n /= 16;
	return (len);
}

int	ft_putnbrbase(int n, int base, int l)
{
	int i;
	int quotient;
	int temp;
	char *hexstr;
	int counter;

	counter = 0;
	hexstr = calloc(sizeof(char), (ft_hexlen(n) + 1));
	quotient = n;
	i = 0;
	if (n == 0)
		counter += ft_putnbr(0);
	while (quotient != 0)
	{
		temp = quotient % base;
		if (temp < 10)
			temp = temp + 48;
		else if (l == 1)
			temp = temp + 87;
		else if (l == 0)
			temp = temp + 55;
		hexstr[i]= temp;
		i++;
		quotient /= base;
	}
	quotient = i;
	while (i >= 0)
		ft_putchar(hexstr[i--]);
	return (quotient);
}


