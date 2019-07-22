/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_xXo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:54:28 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/21 17:40:59 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/*int main (void)
{
    int     o = 123;

    //change for x X o

    printf("ORIGINAL PRINTF\n\n");
    printf("\nFLAG ZERO\n");
	printf("01 - 0w<p : |%5.10o|\n", o);
	printf("02 - 0wp  : |%010.5o|\n", o);
	printf("03 - 0w   : |%010o|\n", o);
	printf("04 - 0p   : |%0.5o|\n", o);
	printf("05 - 0    : |%0o|\n", o);

	printf("\nFLAG HASH\n");
	printf("06 - #w<p : |%#5.10o|\n", o);
	printf("07 - #w>p : |%#10.5o|\n", o);
	printf("08 - #w   : |%#10o|\n", o);
	printf("09 - #p   : |%#.5o|\n", o);
	printf("10 - #    : |%#o|\n\n\n", o);

	printf("\nFLAG MINUS\n");
	printf("11 - -w<p : |%-5.10o|\n", o);
	printf("12 - -wp  : |%-10.5o|\n", o);
	printf("13 - -w   : |%-10o|\n", o);
	printf("14 - -p   : |%-.5o|\n", o);
	printf("15 - -    : |%-o|\n", o);
	
	printf("\nCOMBINATIONS\n");
	printf("\nZERO AND HASH\n");
	printf("16 - 0#w<p : |%0#5.10o|\n", o);
	printf("17 - 0#w>p : |%0#10.5o|\n", o);
	printf("18 - 0#w   : |%0#10o|\n", o);
	printf("19 - 0#p   : |%0#.5o|\n", o);
	printf("20 - 0#    : |%0#o|\n", o);

	printf("\nMINUS AND HASH\n");
	printf("21 - -#w<p : |%-#5.10o|\n", o);
	printf("22 - -#w>p : |%-#10.5o|\n", o);
	printf("23 - -#w   : |%-#10o|\n", o);
	printf("24 - -#p   : |%-#.5o|\n", o);
	printf("25 - -#    : |%-#o|\n", o);

	printf("\nIF THERE IS NO FLAGS\n");
	printf("If there is no flags width == 1 and precision == 1\n");
	printf("26 - w<p   : |%5.10o|\n", o);
	printf("27 - w>p   : |%10.5o|\n", o);
	printf("28 - w=p   : |%5.5o|\n", o);

	printf("29 - w     : |%5o|\n", o);
	printf("30 - p     : |%.5o|\n", o);
	printf("31 -       : |%o|\n", o);

    printf("MY FFT_PRINTF\n\n");
    ft_printf("\nFLAG ZERO\n");
	ft_printf("01 - 0w<p : |%5.10o|\n", o);
	ft_printf("02 - 0wp  : |%010.5o|\n", o);
	ft_printf("03 - 0w   : |%010o|\n", o);
	ft_printf("04 - 0p   : |%0.5o|\n", o);
	ft_printf("05 - 0    : |%0o|\n", o);

	ft_printf("\nFLAG HASH\n");
	ft_printf("06 - #w<p : |%#5.10o|\n", o);
	ft_printf("07 - #w>p : |%#10.5o|\n", o);
	ft_printf("08 - #w   : |%#10o|\n", o);
	ft_printf("09 - #p   : |%#.5o|\n", o);
	ft_printf("10 - #    : |%#o|\n\n\n", o);

	ft_printf("\nFLAG MINUS\n");
	ft_printf("11 - -w<p : |%-5.10o|\n", o);
	ft_printf("12 - -wp  : |%-10.5o|\n", o);
	ft_printf("13 - -w   : |%-10o|\n", o);
	ft_printf("14 - -p   : |%-.5o|\n", o);
	ft_printf("15 - -    : |%-o|\n", o);
	
	ft_printf("\nCOMBINATIONS\n");
	ft_printf("\nZERO AND HASH\n");
	ft_printf("16 - 0#w<p : |%0#5.10o|\n", o);
	ft_printf("17 - 0#w>p : |%0#10.5o|\n", o);
	ft_printf("18 - 0#w   : |%0#10o|\n", o);
	ft_printf("19 - 0#p   : |%0#.5o|\n", o);
	ft_printf("20 - 0#    : |%0#o|\n", o);

	ft_printf("\nMINUS AND HASH\n");
	ft_printf("21 - -#w<p : |%-#5.10o|\n", o);
	ft_printf("22 - -#w>p : |%-#10.5o|\n", o);
	ft_printf("23 - -#w   : |%-#10o|\n", o);
	ft_printf("24 - -#p   : |%-#.5o|\n", o);
	ft_printf("25 - -#    : |%-#o|\n", o);

	ft_printf("\nIF THERE IS NO FLAGS\n");
	ft_printf("If there is no flags width == 1 and precision == 1\n");
	ft_printf("26 - w<p   : |%5.10o|\n", o);
	ft_printf("27 - w>p   : |%10.5o|\n", o);
	ft_printf("28 - w=p   : |%5.5o|\n", o);

	ft_printf("29 - w     : |%5o|\n", o);
	ft_printf("30 - p     : |%.5o|\n", o);
	ft_printf("31 -       : |%o|\n", o);
    return (0);
} */