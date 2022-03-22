/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:26 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/22 18:11:19 by dyeboa        ########   odam.nl         */
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

int	ft_putnbr_base(unsigned int n, char *base, int flag)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		ft_putnbr_base(n / 16, base, flag);
	if (flag == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
	else if (flag == 'x')
		ft_putchar("0123456789abcdef"[n % 16]);
	else
		return (0);
	counter++;
	return (counter);
}