/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:07:07 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 12:02:06 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int     x = 1234;

    printf("ORIGINAL PRINTF\n\n");
    printf("w == 0 p == 0\n\n");
    printf("01  +        |%+d|\n", x);
    printf("02  +-       |%+-d|\n", x);
    printf("03  +0       |%+0d|\n", x);
    //printf("04  +' '     |%+ 10d|\n", x);
    printf("05  -        |%-d|\n", x);
    //printf("06  -0       |%-010d|\n", x);
    printf("07  -' '     |%- d|\n", x);
    printf("08  0        |%0d|\n", x);
    printf("09  0' '     |%0 d|\n", x);
    printf("10  ' '      |% d|\n", x);
    //printf("11  +-0      |%+-010d|\n", x);
    //printf("12  +' '0    |%+ 010d|\n", x);
    //printf("13  +-' '    |%+- 10d|\n", x);
    //printf("14  -0' '    |%-0 10d|\n", x);
    //printf("15  +-0' '   |%+- 10d|\n", x);

    printf("\nw == 1 p == 0\n");    //w > numlen
    printf("01  w+       |%+10d|\n", x);
    printf("02  w+-      |%+-10d|\n", x);
    printf("03  w+0      |%+010d|\n", x);
    //printf("04  w+' '    |%+ 10d|\n", x);
    printf("05  w-       |%-10d|\n", x);
    //printf("06  w-0      |%-010d|\n", x);
    printf("07  w-' '    |%- 10d|\n", x);
    printf("08  w0       |%010d|\n", x);
    printf("09  w0' '    |%0 10d|\n", x);
    printf("10  w' '     |% 10d|\n", x);
    //printf("11  w+-0     |%+-010d|\n", x);
    //printf("12  w+' '0   |%+ 010d|\n", x);
    //printf("13  w+-' '   |%+- 10d|\n", x);
    //printf("14  w-0' '   |%-0 10d|\n", x);
    //printf("15  w+-0' '  |%+-0 10d|\n", x);
    
    printf("\nw == 0 p == 1\n");    //p > numlen
    printf("01  p+        |%+.7d|\n", x);
    printf("02  p+-       |%+-.7d|\n", x);
    printf("03  p+0       |%+0.7d|\n", x);
    //printf("04  p+' '     |%+ .7d|\n", x);
    printf("05  p-        |%-.7d|\n", x);
    //printf("06  p-0       |%-0.7d|\n", x);
    printf("07  p-' '     |%- .7d|\n", x);
    printf("08  p0        |%0.7d|\n", x);
    printf("09  p0' '     |%0 .7d|\n", x);
    printf("10  p' '      |% .7d|\n", x);
    //printf("11  p+-0      |%+-0.7d|\n", x);
    //printf("12  p+' '0    |%+ 0.7d|\n", x);
    //printf("13  p+-' '    |%+- .7d|\n", x);
    //printf("14  p-0' '    |%-0 .7d|\n", x);
    //printf("15  p+-0' '   |%+- .7d|\n", x);

    printf("\nw == 0 p == 1\n");    //p < numlen
    printf("01  p+        |%+.2d|\n", x);
    printf("02  p+-       |%+-.2d|\n", x);
    printf("03  p+0       |%+0.2d|\n", x);
    //printf("04  p+' '     |%.2d|\n", x);
    printf("05  p-        |%-.2d|\n", x);
    //printf("06  p-0       |%.2d|\n", x);
    printf("07  p-' '     |%- .2d|\n", x);
    printf("08  p0        |%0.2d|\n", x);
    printf("09  p0' '     |%0 .2d|\n", x);
    printf("10  p' '      |% .2d|\n", x);
    //printf("11  p+-0      |%.2d|\n", x);
    //printf("12  p+' '0    |%.2d|\n", x);
    //printf("13  p+-' '    |%.2d|\n", x);
    //printf("14  p-0' '    |%.2d|\n", x);
    //printf("15  p+-0' '   |%.2d|\n", x);

    printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p > numlen
    printf("01  pw+       |%+10.7d|\n", x);
    printf("02  pw+-      |%+-10.7d|\n", x);
    printf("03  pw+0      |%+010.7d|\n", x);
    //printf("04  pw+' '    |%d|\n", x);
    printf("05  pw-       |%-10.7d|\n", x);
    //printf("06  pw-0      |%d|\n", x);
    printf("07  pw-' '    |%- 10.7d|\n", x);
    printf("08  pw0       |%010.7d|\n", x);
    printf("09  pw0' '    |%0 10.7d|\n", x);
    printf("10  pw' '     |% 10.7d|\n", x);
    //printf("11  pw+-0     |%d|\n", x);
    //printf("12  pw+' '0   |%d|\n", x);
    //printf("13  pw+-' '   |%d|\n", x);
    //printf("14  pw-0' '   |%d|\n", x);
    //printf("15  pw+-0' '  |%d|\n", x);

    printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p < numlen
    printf("01  pw+       |%+10.3d|\n", x);
    printf("02  pw+-      |%+-10.3d|\n", x);
    printf("03  pw+0      |%+010.3d|\n", x);
    //printf("04  pw+' '    |%d|\n", x);
    printf("05  pw-       |%-10.3d|\n", x);
    //printf("06  pw-0      |%d|\n", x);
    printf("07  pw-' '    |%- 10.3d|\n", x);
    printf("08  pw0       |%010.3d|\n", x);
    printf("09  pw0' '    |%0 10.3d|\n", x);
    printf("10  pw' '     |% 10.3d|\n", x);
    //printf("11  pw+-0     |%d|\n", x);
    //printf("12  pw+' '0   |%d|\n", x);
    //printf("13  pw+-' '   |%d|\n", x);
    //printf("14  pw-0' '   |%d|\n", x);
    //printf("15  pw+-0' '  |%d|\n", x);

    printf("\nw == 1 p == 1 w =< p\n");    //w > numlen && p > numlen (same if p < numlen)
    printf("01  pw+       |%+7.10d|\n", x);
    printf("02  pw+-      |%+-7.10d|\n", x);
    printf("03  pw+0      |%+07.10d|\n", x);
    //printf("04  pw+' '    |%d|\n", x);
    printf("05  pw-       |%-7.10d|\n", x);
    //printf("06  pw-0      |%d|\n", x);
    printf("07  pw-' '    |%- 7.10d|\n", x);
    printf("08  pw0       |%07.10d|\n", x);
    printf("09  pw0' '    |%0 7.10d|\n", x);
    printf("10  pw' '     |% 7.10d|\n", x);
    //printf("11  pw+-0     |%d|\n", x);
    //printf("12  pw+' '0   |%d|\n", x);
    //printf("13  pw+-' '   |%d|\n", x);
    //printf("14  pw-0' '   |%d|\n", x);
    //printf("15  pw+-0' '  |%d|\n", x);

    printf("\nMY FT_PRINTF\n\n");
    ft_printf("w == 0 p == 0\n\n");
    ft_printf("01  +        |%+d|\n", x);
    ft_printf("02  +-       |%+-d|\n", x);
    ft_printf("03  +0       |%+0d|\n", x);
    //ft_printf("04  +' '     |%+ 10d|\n", x);
    ft_printf("05  -        |%-d|\n", x);
    //ft_printf("06  -0       |%-010d|\n", x);
    ft_printf("07  -' '     |%- d|\n", x);
    ft_printf("08  0        |%0d|\n", x);
    ft_printf("09  0' '     |%0 d|\n", x);
    ft_printf("10  ' '      |% d|\n", x);
    //ft_printf("11  +-0      |%+-010d|\n", x);
    //ft_printf("12  +' '0    |%+ 010d|\n", x);
    //ft_printf("13  +-' '    |%+- 10d|\n", x);
    //ft_printf("14  -0' '    |%-0 10d|\n", x);
    //ft_printf("15  +-0' '   |%+- 10d|\n", x);

    ft_printf("\nw == 1 p == 0\n");    //w > numlen
    ft_printf("01  w+       |%+10d|\n", x);
    ft_printf("02  w+-      |%+-10d|\n", x);
    ft_printf("03  w+0      |%+010d|\n", x);
    //ft_printf("04  w+' '    |%+ 10d|\n", x);
    ft_printf("05  w-       |%-10d|\n", x);
    //ft_printf("06  w-0      |%-010d|\n", x);
    ft_printf("07  w-' '    |%- 10d|\n", x);
    ft_printf("08  w0       |%010d|\n", x);
    ft_printf("09  w0' '    |%0 10d|\n", x);
    ft_printf("10  w' '     |% 10d|\n", x);
    //ft_printf("11  w+-0     |%+-010d|\n", x);
    //ft_printf("12  w+' '0   |%+ 010d|\n", x);
    //ft_printf("13  w+-' '   |%+- 10d|\n", x);
    //ft_printf("14  w-0' '   |%-0 10d|\n", x);
    //ft_printf("15  w+-0' '  |%+-0 10d|\n", x);
    
    ft_printf("\nw == 0 p == 1\n");    //p > numlen
    ft_printf("01  p+        |%+.7d|\n", x);
    ft_printf("02  p+-       |%+-.7d|\n", x);
    ft_printf("03  p+0       |%+0.7d|\n", x);
    //ft_printf("04  p+' '     |%+ .7d|\n", x);
    ft_printf("05  p-        |%-.7d|\n", x);
    //ft_printf("06  p-0       |%-0.7d|\n", x);
    ft_printf("07  p-' '     |%- .7d|\n", x);
    ft_printf("08  p0        |%0.7d|\n", x);
    ft_printf("09  p0' '     |%0 .7d|\n", x);
    ft_printf("10  p' '      |% .7d|\n", x);
    //ft_printf("11  p+-0      |%+-0.7d|\n", x);
    //ft_printf("12  p+' '0    |%+ 0.7d|\n", x);
    //ft_printf("13  p+-' '    |%+- .7d|\n", x);
    //ft_printf("14  p-0' '    |%-0 .7d|\n", x);
    //ft_printf("15  p+-0' '   |%+- .7d|\n", x);

    ft_printf("\nw == 0 p == 1\n");    //p < numlen
    ft_printf("01  p+        |%+.2d|\n", x);
    ft_printf("02  p+-       |%+-.2d|\n", x);
    ft_printf("03  p+0       |%+0.2d|\n", x);
    //ft_printf("04  p+' '     |%.2d|\n", x);
    ft_printf("05  p-        |%-.2d|\n", x);
    //ft_printf("06  p-0       |%.2d|\n", x);
    ft_printf("07  p-' '     |%- .2d|\n", x);
    ft_printf("08  p0        |%0.2d|\n", x);
    ft_printf("09  p0' '     |%0 .2d|\n", x);
    ft_printf("10  p' '      |% .2d|\n", x);
    //ft_printf("11  p+-0      |%.2d|\n", x);
    //ft_printf("12  p+' '0    |%.2d|\n", x);
    //ft_printf("13  p+-' '    |%.2d|\n", x);
    //ft_printf("14  p-0' '    |%.2d|\n", x);
    //ft_printf("15  p+-0' '   |%.2d|\n", x);

    ft_printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p > numlen
    ft_printf("01  pw+       |%+10.7d|\n", x);
    ft_printf("02  pw+-      |%+-10.7d|\n", x);
    ft_printf("03  pw+0      |%+010.7d|\n", x);
    //ft_printf("04  pw+' '    |%d|\n", x);
    ft_printf("05  pw-       |%-10.7d|\n", x);
    //ft_printf("06  pw-0      |%d|\n", x);
    ft_printf("07  pw-' '    |%- 10.7d|\n", x);
    ft_printf("08  pw0       |%010.7d|\n", x);
    ft_printf("09  pw0' '    |%0 10.7d|\n", x);
    ft_printf("10  pw' '     |% 10.7d|\n", x);
    //ft_printf("11  pw+-0     |%d|\n", x);
    //ft_printf("12  pw+' '0   |%d|\n", x);
    //ft_printf("13  pw+-' '   |%d|\n", x);
    //ft_printf("14  pw-0' '   |%d|\n", x);
    //ft_printf("15  pw+-0' '  |%d|\n", x);

    ft_printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p < numlen
    ft_printf("01  pw+       |%+10.3d|\n", x);
    ft_printf("02  pw+-      |%+-10.3d|\n", x);
    ft_printf("03  pw+0      |%+010.3d|\n", x);
    //ft_printf("04  pw+' '    |%d|\n", x);
    ft_printf("05  pw-       |%-10.3d|\n", x);
    //ft_printf("06  pw-0      |%d|\n", x);
    ft_printf("07  pw-' '    |%- 10.3d|\n", x);
    ft_printf("08  pw0       |%010.3d|\n", x);
    ft_printf("09  pw0' '    |%0 10.3d|\n", x);
    ft_printf("10  pw' '     |% 10.3d|\n", x);
    //ft_printf("11  pw+-0     |%d|\n", x);
    //ft_printf("12  pw+' '0   |%d|\n", x);
    //ft_printf("13  pw+-' '   |%d|\n", x);
    //ft_printf("14  pw-0' '   |%d|\n", x);
    //ft_printf("15  pw+-0' '  |%d|\n", x);

    ft_printf("\nw == 1 p == 1 w =< p\n");    //w > numlen && p > numlen (same if p < numlen)
    ft_printf("01  pw+       |%+7.10d|\n", x);
    ft_printf("02  pw+-      |%+-7.10d|\n", x);
    ft_printf("03  pw+0      |%+07.10d|\n", x);
    //ft_printf("04  pw+' '    |%d|\n", x);
    ft_printf("05  pw-       |%-7.10d|\n", x);
    //ft_printf("06  pw-0      |%d|\n", x);
    ft_printf("07  pw-' '    |%- 7.10d|\n", x);
    ft_printf("08  pw0       |%07.10d|\n", x);
    ft_printf("09  pw0' '    |%0 7.10d|\n", x);
    ft_printf("10  pw' '     |% 7.10d|\n", x);
    //ft_printf("11  pw+-0     |%d|\n", x);
    //ft_printf("12  pw+' '0   |%d|\n", x);
    //ft_printf("13  pw+-' '   |%d|\n", x);
    //ft_printf("14  pw-0' '   |%d|\n", x);
    //ft_printf("15  pw+-0' '  |%d|\n", x);

    return (0);
}