/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:07:07 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 11:04:32 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int     x = 123;

    printf("ORIGINAL PRINTF\n\n");
    printf("w == 0 p == 0\n\n");
    printf("01  +        |%d|\n");
    printf("02  +-       |%d|\n");
    printf("03  +0       |%d|\n");
    printf("04  +' '     |%d|\n");
    printf("05  -        |%d|\n");
    printf("06  -0       |%d|\n");
    printf("07  -' '     |%d|\n");
    printf("08  0        |%d|\n");
    printf("09  0' '     |%d|\n");
    printf("10  ' '      |%d|\n");
    printf("11  +-0      |%d|\n");
    printf("12  +' '0    |%d|\n");
    printf("13  +-' '    |%d|\n");
    printf("14  -0' '    |%d|\n");
    printf("15  +-0' '   |%d|\n");

    printf("\nw == 1 p == 0\n");    //w > numlen
    printf("01  w+       |%d|\n");
    printf("02  w+-      |%d|\n");
    printf("03  w+0      |%d|\n");
    printf("04  w+' '    |%d|\n");
    printf("05  w-       |%d|\n");
    printf("06  w-0      |%d|\n");
    printf("07  w-' '    |%d|\n");
    printf("08  w0       |%d|\n");
    printf("09  w0' '    |%d|\n");
    printf("10  w' '     |%d|\n");
    printf("11  w+-0     |%d|\n");
    printf("12  w+' '0   |%d|\n");
    printf("13  w+-' '   |%d|\n");
    printf("14  w-0' '   |%d|\n");
    printf("15  w+-0' '  |%d|\n");
    
    printf("\nw == 0 p == 1\n");    //p < numlen
    printf("01  p+        |%d|\n");
    printf("02  p+-       |%d|\n");
    printf("03  p+0       |%d|\n");
    printf("04  p+' '     |%d|\n");
    printf("05  p-        |%d|\n");
    printf("06  p-0       |%d|\n");
    printf("07  p-' '     |%d|\n");
    printf("08  p0        |%d|\n");
    printf("09  p0' '     |%d|\n");
    printf("10  p' '      |%d|\n");
    printf("11  p+-0      |%d|\n");
    printf("12  p+' '0    |%d|\n");
    printf("13  p+-' '    |%d|\n");
    printf("14  p-0' '    |%d|\n");
    printf("15  p+-0' '   |%d|\n");

    printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p <numlen
    printf("01  pw+       |%d|\n");
    printf("02  pw+-      |%d|\n");
    printf("03  pw+0      |%d|\n");
    printf("04  pw+' '    |%d|\n");
    printf("05  pw-       |%d|\n");
    printf("06  pw-0      |%d|\n");
    printf("07  pw-' '    |%d|\n");
    printf("08  pw0       |%d|\n");
    printf("09  pw0' '    |%d|\n");
    printf("10  pw' '     |%d|\n");
    printf("11  pw+-0     |%d|\n");
    printf("12  pw+' '0   |%d|\n");
    printf("13  pw+-' '   |%d|\n");
    printf("14  pw-0' '   |%d|\n");
    printf("15  pw+-0' '  |%d|\n");

    printf("\nw == 1 p == 1 w < p\n");    //w > numlen && p <numlen
    printf("01  pw+       |%d|\n");
    printf("02  pw+-      |%d|\n");
    printf("03  pw+0      |%d|\n");
    printf("04  pw+' '    |%d|\n");
    printf("05  pw-       |%d|\n");
    printf("06  pw-0      |%d|\n");
    printf("07  pw-' '    |%d|\n");
    printf("08  pw0       |%d|\n");
    printf("09  pw0' '    |%d|\n");
    printf("10  pw' '     |%d|\n");
    printf("11  pw+-0     |%d|\n");
    printf("12  pw+' '0   |%d|\n");
    printf("13  pw+-' '   |%d|\n");
    printf("14  pw-0' '   |%d|\n");
    printf("15  pw+-0' '  |%d|\n");

    printf("\nw == 1 p == 1 w == p\n");    //w > numlen && p <numlen
    printf("01  pw+       |%d|\n");
    printf("02  pw+-      |%d|\n");
    printf("03  pw+0      |%d|\n");
    printf("04  pw+' '    |%d|\n");
    printf("05  pw-       |%d|\n");
    printf("06  pw-0      |%d|\n");
    printf("07  pw-' '    |%d|\n");
    printf("08  pw0       |%d|\n");
    printf("09  pw0' '    |%d|\n");
    printf("10  pw' '     |%d|\n");
    printf("11  pw+-0     |%d|\n");
    printf("12  pw+' '0   |%d|\n");
    printf("13  pw+-' '   |%d|\n");
    printf("14  pw-0' '   |%d|\n");
    printf("15  pw+-0' '  |%d|\n");

    printf("\nMY FT_PRINTF\n\n");
    ft_printf("w == 0 p == 0\n\n");
    ft_printf("01  +        |%d|\n");
    ft_printf("02  +-       |%d|\n");
    ft_printf("03  +0       |%d|\n");
    ft_printf("04  +' '     |%d|\n");
    ft_printf("05  -        |%d|\n");
    ft_printf("06  -0       |%d|\n");
    ft_printf("07  -' '     |%d|\n");
    ft_printf("08  0        |%d|\n");
    ft_printf("09  0' '     |%d|\n");
    ft_printf("10  ' '      |%d|\n");
    ft_printf("11  +-0      |%d|\n");
    ft_printf("12  +' '0    |%d|\n");
    ft_printf("13  +-' '    |%d|\n");
    ft_printf("14  -0' '    |%d|\n");
    ft_printf("15  +-0' '   |%d|\n");

    ft_printf("\nw == 1 p == 0\n");    //w > numlen
    ft_printf("01  w+       |%d|\n");
    ft_printf("02  w+-      |%d|\n");
    ft_printf("03  w+0      |%d|\n");
    ft_printf("04  w+' '    |%d|\n");
    ft_printf("05  w-       |%d|\n");
    ft_printf("06  w-0      |%d|\n");
    ft_printf("07  w-' '    |%d|\n");
    ft_printf("08  w0       |%d|\n");
    ft_printf("09  w0' '    |%d|\n");
    ft_printf("10  w' '     |%d|\n");
    ft_printf("11  w+-0     |%d|\n");
    ft_printf("12  w+' '0   |%d|\n");
    ft_printf("13  w+-' '   |%d|\n");
    ft_printf("14  w-0' '   |%d|\n");
    ft_printf("15  w+-0' '  |%d|\n");
    
    ft_printf("\nw == 0 p == 1\n");    //p < numlen
    ft_printf("01  p+        |%d|\n");
    ft_printf("02  p+-       |%d|\n");
    ft_printf("03  p+0       |%d|\n");
    ft_printf("04  p+' '     |%d|\n");
    ft_printf("05  p-        |%d|\n");
    ft_printf("06  p-0       |%d|\n");
    ft_printf("07  p-' '     |%d|\n");
    ft_printf("08  p0        |%d|\n");
    ft_printf("09  p0' '     |%d|\n");
    ft_printf("10  p' '      |%d|\n");
    ft_printf("11  p+-0      |%d|\n");
    ft_printf("12  p+' '0    |%d|\n");
    ft_printf("13  p+-' '    |%d|\n");
    ft_printf("14  p-0' '    |%d|\n");
    ft_printf("15  p+-0' '   |%d|\n");

    ft_printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p <numlen
    ft_printf("01  pw+       |%d|\n");
    ft_printf("02  pw+-      |%d|\n");
    ft_printf("03  pw+0      |%d|\n");
    ft_printf("04  pw+' '    |%d|\n");
    ft_printf("05  pw-       |%d|\n");
    ft_printf("06  pw-0      |%d|\n");
    ft_printf("07  pw-' '    |%d|\n");
    ft_printf("08  pw0       |%d|\n");
    ft_printf("09  pw0' '    |%d|\n");
    ft_printf("10  pw' '     |%d|\n");
    ft_printf("11  pw+-0     |%d|\n");
    ft_printf("12  pw+' '0   |%d|\n");
    ft_printf("13  pw+-' '   |%d|\n");
    ft_printf("14  pw-0' '   |%d|\n");
    ft_printf("15  pw+-0' '  |%d|\n");

    ft_printf("\nw == 1 p == 1 w < p\n");    //w > numlen && p <numlen
    ft_printf("01  pw+       |%d|\n");
    ft_printf("02  pw+-      |%d|\n");
    ft_printf("03  pw+0      |%d|\n");
    ft_printf("04  pw+' '    |%d|\n");
    ft_printf("05  pw-       |%d|\n");
    ft_printf("06  pw-0      |%d|\n");
    ft_printf("07  pw-' '    |%d|\n");
    ft_printf("08  pw0       |%d|\n");
    ft_printf("09  pw0' '    |%d|\n");
    ft_printf("10  pw' '     |%d|\n");
    ft_printf("11  pw+-0     |%d|\n");
    ft_printf("12  pw+' '0   |%d|\n");
    ft_printf("13  pw+-' '   |%d|\n");
    ft_printf("14  pw-0' '   |%d|\n");
    ft_printf("15  pw+-0' '  |%d|\n");

    ft_printf("\nw == 1 p == 1 w == p\n");    //w > numlen && p <numlen
    ft_printf("01  pw+       |%d|\n");
    ft_printf("02  pw+-      |%d|\n");
    ft_printf("03  pw+0      |%d|\n");
    ft_printf("04  pw+' '    |%d|\n");
    ft_printf("05  pw-       |%d|\n");
    ft_printf("06  pw-0      |%d|\n");
    ft_printf("07  pw-' '    |%d|\n");
    ft_printf("08  pw0       |%d|\n");
    ft_printf("09  pw0' '    |%d|\n");
    ft_printf("10  pw' '     |%d|\n");
    ft_printf("11  pw+-0     |%d|\n");
    ft_printf("12  pw+' '0   |%d|\n");
    ft_printf("13  pw+-' '   |%d|\n");
    ft_printf("14  pw-0' '   |%d|\n");
    ft_printf("15  pw+-0' '  |%d|\n");


    
    return (0);
}