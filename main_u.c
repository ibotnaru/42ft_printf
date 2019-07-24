/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:52:30 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/23 19:29:55 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int     x = 1234;

    printf("ORIGINAL PRINTF : u\n\n");
    printf("w == 0 p == 0\n\n");
    printf("00           |%u|\n", x);
    printf("05  -        |%-u|\n", x);
    printf("08  0        |%0u|\n", x);


    printf("\nw == 1 p == 0\n");    //w > numlen
    printf("00  w        |%10u|\n", x);
    printf("05  w-       |%-10u|\n", x);
    printf("08  w0       |%010u|\n", x);

    
    printf("\nw == 0 p == 1\n");    //p > numlen
    printf("00  p         |%.7u|\n", x);
    printf("05  p-        |%-.7u|\n", x);
    printf("08  p0        |%0.7u|\n", x);


    printf("\nw == 0 p == 1\n");    //p < numlen
    printf("00  p-        |%.2u|\n", x);
    printf("05  p-        |%-.2u|\n", x);
    printf("08  p0        |%0.2u|\n", x);


    printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p > numlen
    printf("00  pw        |%10.7u|\n", x);
    printf("05  pw-       |%-10.7u|\n", x);
    printf("08  pw0       |%010.7u|\n", x);


    printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p < numlen
    printf("00  pw        |%10.3u|\n", x);
    printf("05  pw-       |%-10.3u|\n", x);
    printf("08  pw0       |%010.3u|\n", x);


    printf("\nw == 1 p == 1 w =< p\n");    //w > numlen && p > numlen (same if p < numlen)
    printf("00  pw        |%7.10u|\n", x);
    printf("05  pw-       |%-7.10u|\n", x);
    printf("08  pw0       |%07.10u|\n", x);




    printf("\n\nMY FT_PRINTF : u\n\n");
    ft_printf("w == 0 p == 0\n\n");
    ft_printf("00           |%u|\n", x);
    ft_printf("05  -        |%-u|\n", x);
    ft_printf("08  0        |%0u|\n", x);


    ft_printf("\nw == 1 p == 0\n");    //w > numlen
    ft_printf("00  w        |%10u|\n", x);
    ft_printf("05  w-       |%-10u|\n", x);
    ft_printf("08  w0       |%010u|\n", x);

    
    ft_printf("\nw == 0 p == 1\n");    //p > numlen
    ft_printf("00  p         |%.7u|\n", x);
    ft_printf("05  p-        |%-.7u|\n", x);
    ft_printf("08  p0        |%0.7u|\n", x);


    ft_printf("\nw == 0 p == 1\n");    //p < numlen
    ft_printf("00  p-        |%.2u|\n", x);
    ft_printf("05  p-        |%-.2u|\n", x);
    ft_printf("08  p0        |%0.2u|\n", x);


    ft_printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p > numlen
    ft_printf("00  pw        |%10.7u|\n", x);
    ft_printf("05  pw-       |%-10.7u|\n", x);
    ft_printf("08  pw0       |%010.7u|\n", x);


    ft_printf("\nw == 1 p == 1 w > p\n");    //w > numlen && p < numlen
    ft_printf("00  pw        |%10.3u|\n", x);
    ft_printf("05  pw-       |%-10.3u|\n", x);
    ft_printf("08  pw0       |%010.3u|\n", x);


    ft_printf("\nw == 1 p == 1 w =< p\n");    //w > numlen && p > numlen (same if p < numlen)
    ft_printf("00  pw        |%7.10u|\n", x);
    ft_printf("05  pw-       |%-7.10u|\n", x);
    ft_printf("08  pw0       |%07.10u|\n", x);
   
    return (0);
}