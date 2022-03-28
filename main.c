/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/17 15:19:22 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/28 16:48:08 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main()
{
	// ft_printf("%c", '0');
	// ft_printf(" %c ", '0');
	// ft_printf(" %c", '0' - 256);
	// ft_printf("%c ", '0' + 256);
	// ft_printf(" %c %c %c ", '0', 0, '1');
	// ft_printf(" %c %c %c ", ' ', ' ', ' ');
	// ft_printf(" %c %c %c ", '1', '2', '3');
	// ft_printf(" %c %c %c ", '2', '1', 0);
	// ft_printf(" %c %c %c ", 0, '1', '2');
	// printf("%c", '0');
	// printf(" %c ", '0');
	// printf(" %c", '0' - 256);
	// printf("%c ", '0' + 256);
	// printf(" %c %c %c ", '0', 0, '1');
	// printf(" %c %c %c ", ' ', ' ', ' ');
	// printf(" %c %c %c ", '1', '2', '3');
	// printf(" %c %c %c ", '2', '1', 0);
	// printf(" %c %c %c ", 0, '1', '2');
	// printf("\n%s\n", "printft");


	// printf("character: %c\n", 'K');
	// ft_printf("character: %c\n", 'K');
	
	// printf("string: %s\n", "hello");
	// ft_printf("string: %s\n", "hello");
	
	// printf("decimaal en int: %d\n", -2147483647);
	// ft_printf("decimaal en int: %d \n", -2147483647);

	// printf("unsigned int: %u\n", 5);
	// ft_printf("unsigned int: %u \n", 5);

	// printf("percentage: %%\n");
	// ft_printf("percentage: %%\n");
	

	// printf("printf\n");
	// printf(" %x ", 0);
	// printf(" %x ", -1);
	// printf(" %x ", 100);
	// printf(" %x ", -9);
	// printf(" %x ", -101);
	
	// printf("\nmijn printf\n");
	// ft_printf(" %x ", 0);
	// ft_printf(" %x ", -1);
	// ft_printf(" %x ", 100);
	// ft_printf(" %x ", -9);
	// ft_printf(" %x \n", -101);
	// printf("number to lowercase hex: %x\n", 47);
	// ft_printf("number to lowercase hex: %x\n", 47);

	// printf("number to lowercase hex: %X\n", 47);
	// ft_printf("number to lowercase hex: %X\n", 47);

    // int i=85;

    // printf("%p %Fp",i,i);
	int x = 50;
  	int *ptr = &x;
	printf("The address is: %p, the value is %d\n", ptr, *ptr);
	ft_printf("The address is: %p, the value is %d\n", ptr, *ptr);
	// printf(" %p ", -1);
	// printf(" %p ", 1);
	// printf(" %p ", 15);
	// printf(" %p ", 16);
	// printf(" %p ", 17);
	// printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf(" %p %p ", INT_MIN, INT_MAX);
	// printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// printf(" %p %p ", 0, 0);

	// ft_printf(" %p ", -1);
	// ft_printf(" %p ", 1);
	// ft_printf(" %p ", 15);
	// ft_printf(" %p ", 16);
	// ft_printf(" %p ", 17);
	// ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	// ft_printf(" %p %p ", INT_MIN, INT_MAX);
	// ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// ft_printf(" %p %p ", 0, 0);
}


