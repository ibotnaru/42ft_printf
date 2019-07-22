/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_csp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:44:27 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 00:33:11 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main (void)
{

  	//  checking the s and c

	char	*str = "Hello world";
    char    character = 'A';
    int     p = 10;
    int     *ptr;

    ptr = &p;
    printf("Print s: Hello world\n");
    printf("ORIGINAL PRINTF\n\n");
    printf("01 wp>s w==p     |%15.15s|\n", str);
    printf("02 wp>s w<p      |%15.20s|\n", str);
    printf("03 wp>s w>p      |%20.15s|\n", str);
    printf("04 w>s p<s w>p   |%20.5s|\n", str);
    printf("05 w<s p>s p>w   |%5.20s|\n", str);
    printf("06 - wp>s w==p   |%-15.15s|\n", str);
    printf("07 - wp>s w<p    |%-15.20s|\n", str);
    printf("08 - wp>s w>p    |%-20.15s|\n", str);
    printf("09 - w>s p<s w>p |%-20.5s|\n", str);
    printf("10 - w<s p>s p>w |%-5.20s|\n", str);
    printf("11 -  p<s        |%-.5s|\n", str);
    printf("12 -  p>s        |%-.20s|\n", str);
    printf("13  p<s          |%.5s|\n", str);
    printf("14  p>s          |%.20s|\n", str);
    printf("15 -  w<s        |%5s|\n", str);
    printf("16 -  w>s        |%20s|\n", str);
    printf("17  w<s          |%-5s|\n", str);
    printf("18  w>s          |%-20s|\n", str);
    printf("19  -            |%-s|\n", str);
    printf("20               |%s|\n", str);

    printf("\nMY FT_PRINTF\n\n");

    ft_printf("01 wp>s w==p     |%15.15s|\n", str);
    ft_printf("02 wp>s w<p      |%15.20s|\n", str);
    ft_printf("03 wp>s w>p      |%20.15s|\n", str);
    ft_printf("04 w>s p<s w>p   |%20.5s|\n", str);
    ft_printf("05 w<s p>s p>w   |%5.20s|\n", str);
    ft_printf("06 - wp>s w==p   |%-15.15s|\n", str);
    ft_printf("07 - wp>s w<p    |%-15.20s|\n", str);
    ft_printf("08 - wp>s w>p    |%-20.15s|\n", str);
    ft_printf("09 - w>s p<s w>p |%-20.5s|\n", str);
    ft_printf("10 - w<s p>s p>w |%-5.20s|\n", str);
    ft_printf("11 -  p<s        |%-.5s|\n", str);
    ft_printf("12 -  p>s        |%-.20s|\n", str);
    ft_printf("13  p<s          |%.5s|\n", str);
    ft_printf("14  p>s          |%.20s|\n", str);
    ft_printf("15 -  w<s        |%-5s|\n", str);
    ft_printf("16 -  w>s        |%-20s|\n", str);
    ft_printf("17  w<s          |%5s|\n", str);
    ft_printf("18  w>s          |%20s|\n", str);
    ft_printf("19  -            |%-s|\n", str);
    ft_printf("20               |%s|\n", str);


    printf("Print c: A");
    printf("ORIGINAL PRINTF\n\n");
    printf("w>c                 |%10c|\n", character);
    printf("-w>c                |%-10c|\n", character);
    printf("                    |%c|\n", character);
    printf("-                   |%-c|\n", character);

    printf("MY FT_PRINTF\n\n");
    ft_printf("w>c                 |%10c|\n", character);
    ft_printf("-w>c                |%-10c|\n", character);
    ft_printf("                    |%c|\n", character);
    ft_printf("-                   |%-c|\n", character);

    printf("Print ptr: ");
    printf("ORIGINAL PRINTF\n\n");
    printf("%p\n", ptr);
    
    printf("MY FT_PRINTF\n\n");
    ft_printf("%p\n", ptr);


    return (0);
}