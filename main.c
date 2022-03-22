/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dyeboa <dyeboa@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/17 15:19:22 by dyeboa        #+#    #+#                 */
/*   Updated: 2022/03/22 17:59:21 by dyeboa        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	
	// int x = 50;
  	// int *ptr = &x;
	// printf("The address is: %p, the value is %d\n", ptr, *ptr);
	// ft_printf("The address is: %p, the value is %d\n", ptr, *ptr);
	printf("printf\n");
	printf(" %x ", 0);
	printf(" %x ", -1);
	printf(" %x ", 100);
	printf(" %x ", -9);
	printf(" %x ", -101);
	
	printf("\nmijn printf\n");
	ft_printf(" %x ", 0);
	ft_printf(" %x ", -1);
	ft_printf(" %x ", 100);
	ft_printf(" %x ", -9);
	ft_printf(" %x \n", -101);
	// printf("number to lowercase hex: %x\n", 47);
	// ft_printf("number to lowercase hex: %x\n", 47);

	// printf("number to lowercase hex: %X\n", 47);
	// ft_printf("number to lowercase hex: %X\n", 47);
}


