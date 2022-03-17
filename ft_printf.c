/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:14:22 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/17 18:34:57 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list ap, const char str)
{
	int counter_printed;

	counter_printed = 0;
	if (str == 'c')
		counter_printed += ft_putchar(va_arg(ap, int));
	if (str == 's')
		counter_printed += ft_putstr(va_arg(ap, char *));
	if (str == 'd' || str == 'i')
		counter_printed += ft_putnbr(va_arg(ap, int));
	if (str == 'u')
		counter_printed += ft_putunsignednbr(va_arg(ap, unsigned int));
	if (str == '%')
		counter_printed += ft_putchar('%');
	// if (str == 'p')
	// {
	// 	printf("wat is ap: %s\n", va_arg(ap, char *));
	// //	ft_putvoidp(va_arg(ap, char *));
	// 	ft_putstr(va_arg(ap, char *));
	// 	printf("komt in void * pointer to hexdec en ");
	// }
	if (str == 'x')
		counter_printed += ft_putnbrbase(va_arg(ap, int),16, 1);
	if (str == 'X')
		counter_printed += ft_putnbrbase(va_arg(ap, int),16, 0);
	va_end(ap);
	return (counter_printed);
}

int	ft_printf(const char *str, ...)
{
	int i;
	va_list ap;
	int counter_printed;

	i = 0;
	counter_printed = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			counter_printed += ft_parse(ap, str[i + 1]);
			i++;
		}
		else
			counter_printed +=ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (counter_printed);
}

/* 

va_start sets arg_ptr to the first optional argument in the list of arguments that's passed to the function.
va_arg retrieves a value of type from the location that's given by arg_ptr, 
and increments arg_ptr to point to the next argument in the list by using the size of type to determine where the next argument starts. 

va_arg can be used any number of times in the function to retrieve arguments from the list.

va_copy makes a copy of a list of arguments in its current state. 
The src parameter must already be initialized with va_start

va_end: After all arguments have been retrieved, va_end resets the pointer to NULL. 
va_end must be called on each argument list that's initialized with va_start or va_copy before the function returns.

%p The void * pointer argument has to be printed in hexadecimal format.

*/