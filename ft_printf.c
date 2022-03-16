/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:14:22 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/16 17:19:43 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_parse(va_list ap, const char str)
{
	int len;
	len = 0;
	if (str == 'c')
		len += ft_putchar(va_arg(ap, int));
	// if (str[i] == 's')
	// 	printstring(str);
	// if (str[i] == 'p')
	// 	printchar(str);
	// if (str[i] == "d")
	// 	printdec(str);
	// if (str[i] == "i")
	// 	printint(str);
	// if (str[i] == "u")
	// 	printunsigneddec(str);
	// if (str[i] == "x")
	// 	printhexadeclow(str);
	// if (str[i] == "X")
	// 	printhexadecupp(str);
	// if (str[i] == "%")
	// 	printpercentage(str);
	va_end(ap);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int i;
	int len;
	va_list ap;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_parse(ap, str[i + 1]);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return(len);
}

// int main()
// {
// 	printf("Echt Printf:%c\n", 'K');
// 	ft_print("Mijn Code:%c\n", 'K');
// }

/* 

va_start sets arg_ptr to the first optional argument in the list of arguments that's passed to the function.
va_arg retrieves a value of type from the location that's given by arg_ptr, 
and increments arg_ptr to point to the next argument in the list by using the size of type to determine where the next argument starts. 

va_arg can be used any number of times in the function to retrieve arguments from the list.

va_copy makes a copy of a list of arguments in its current state. 
The src parameter must already be initialized with va_start

va_end: After all arguments have been retrieved, va_end resets the pointer to NULL. 
va_end must be called on each argument list that's initialized with va_start or va_copy before the function returns.

%c Prints a single character.
%s Prints a string (as defined by the common C convention).
%p The void * pointer argument has to be printed in hexadecimal format.
%d Prints a decimal (base 10) number.
%i Prints an integer in base 10.
%u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase format.
%X Prints a number in hexadecimal (base 16) uppercase format.
%% Prints a percent sign.

*/