/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:43:35 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/11 21:18:06 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int				main(void)
{

  	//  checking the s_format   проверено на лики

	//char	*str = "world";

	// ft_printf("%-1.10s|\n", str);
	// printf("%-10.10s|", str);
	// ft_printf("%10c", 'F');

	// ft_printf("s1: |%s|\n", str);
	// ft_printf("s1: |%10s|\n", str);
	// ft_printf("s5: |%.3s|\n", str);
	//  ft_printf("s4: |%-10s|\n", str);
	//  ft_printf("s4: |%-.3s|\n", str);
	// ft_printf("s2: |%10.3s|\n", str); 					//**
	// ft_printf("s3: |%-10.3s|\n", str); 
	// ft_printf("|%10s| is a string\n", "this");
	// ft_printf("%10s\n", "this");


	// printf("s1: |%s|\n", str);
	// printf("s1: |%10s|\n", str);
	// printf("s5: |%.3s|\n", str);
	// printf("s4: |%-10s|\n", str);
	// printf("s4: |%-.3s|\n", str);
	// printf("s2: |%10.3s|\n", str);
	// printf("s3: |%-10.3s|\n", str);
	// printf("|%10s| is a string\n", "this");
	// printf("%10s\n", "this");



//     //	  chaecking the c_format   проверено на лики

	// ft_printf("|%c|\n", 'c');
	// ft_printf("|%-10c|\n", 'c');
	// ft_printf("|%10c|\n", 'c');
	// ft_printf("\n|%-4c|\n", '\0');
	// ft_printf("|%4c|\n", '\0');
	// ft_printf("|%-c|\n", '\0');


	// printf("|%c|\n", 'c');
	// printf("|%-10c|\n", 'c');
	// printf("|%10c|\n", 'c');
	// printf("\n|%-4c|\n", '\0');
	// printf("|%4c|\n", '\0');
	// printf("|%-c|\n", '\0');


//     //	 checking the p_format   проверено на лики

// 	int		x = 42;
// 	ft_printf("\np1: |%p|\n", &x);
// 	ft_printf("p1: |%-p|\n", &x);
// 	ft_printf("p2: |%-20p|\n", &x);
// 	ft_printf("p3: |%20p|\n", &x);

// 	//   checking the %_format   проверено на лики

// 	ft_printf("|%-%|\n");
// 	ft_printf("|% %|\n");
// 	ft_printf("|%0%|\n");
// 	ft_printf("\n|%5%|\n");
// 	ft_printf("|%-5%|\n");
// 	ft_printf("|% 5%|\n");
// 	ft_printf("|%05%|\n");



// 	printf("\np1: |%p|\n", &x);
// 	printf("p1: |%-p|\n", &x);
// 	printf("p2: |%-20p|\n", &x);
// 	printf("p3: |%20p|\n", &x);

// 	//    checking the %_format   проверено на лики

// 	printf("|%-%|\n");
// 	printf("|% %|\n");
// 	printf("|%0%|\n");
// 	printf("\n|%5%|\n");
// 	printf("|%-5%|\n");
// 	printf("|% 5%|\n");
// 	printf("|%05%|\n");

//   	//  checking the f_format   проверено на лики

// 	double	f = 10.1234567;
// 	double	f_2 = -10.1234567;

// 	ft_printf("f: |%f|\n", f);

// 	ft_printf("f: |%+f|\n", f);
// 	ft_printf("f: |%-f|\n", f);
// 	ft_printf("f: |% f|\n", f);
// 	ft_printf("f: |%0f|\n", f);

// 	ft_printf("\nf: |%10f|\n", f);
// 	ft_printf("f: |%.3f|\n", f);
// 	ft_printf("f: |%10.3f|\n", f);

// 	ft_printf("\nf: |%-10.3f|\n", f);
// 	ft_printf("f: |%+10.3f|\n", f);
// 	ft_printf("f: |% 10.3f|\n", f);
// 	ft_printf("f: |%010.3f|\n", f);

// 	//    checking negative nbr

// 	ft_printf("f: |%f|\n", f_2);

// 	ft_printf("f: |%+f|\n", f_2);
// 	ft_printf("f: |%-f|\n", f_2);
// 	ft_printf("f: |% f|\n", f_2);
// 	ft_printf("f: |%0f|\n", f_2);

// 	ft_printf("\nf: |%10f|\n", f_2);
// 	ft_printf("f: |%.3f|\n", f_2);
// 	ft_printf("f: |%10.3f|\n", f_2);

// 	ft_printf("\nf: |%-10.3f|\n", f_2);
// 	ft_printf("f: |%+10.3f|\n", f_2);
// 	ft_printf("f: |% 10.3f|\n", f_2);
// 	ft_printf("f: |%f|\n", f);

// 	printf("f: |%+f|\n", f);
// 	printf("f: |%-f|\n", f);
// 	printf("f: |% f|\n", f);
// 	printf("f: |%0f|\n", f);
// 	printf("\nf: |%10f|\n", f);
// 	printf("f: |%.3f|\n", f);
// 	printf("f: |%10.3f|\n", f);
// 	printf("\nf: |%-10.3f|\n", f);
// 	printf("f: |%+10.3f|\n", f);
// 	printf("f: |% 10.3f|\n", f);
// 	printf("f: |%010.3f|\n", f);

// 	//    checking negative nbr

// 	printf("f: |%f|\n", f_2);
// 	printf("f: |%+f|\n", f_2);
// 	printf("f: |%-f|\n", f_2);
// 	printf("f: |% f|\n", f_2);
// 	printf("f: |%0f|\n", f_2);
// 	printf("\nf: |%10f|\n", f_2);
// 	printf("f: |%.3f|\n", f_2);
// 	printf("f: |%10.3f|\n", f_2);
// 	printf("\nf: |%-10.3f|\n", f_2);
// 	printf("f: |%+10.3f|\n", f_2);
// 	printf("f: |% 10.3f|\n", f_2);

//     //	 checking the o_format   проверено на лики

     int		x = 42;
//   	int		z = -42;

//   	ft_printf("o: |%o|\n", x);

//   	ft_printf("o: |%-o|\n", x);
//   	ft_printf("o: |%0o|\n", x);
//   	ft_printf("o: |%#o|\n", x);

//   	ft_printf("\no: |%10o|\n", x);
//   	ft_printf("o: |%.5o|\n", x);
//   	ft_printf("o: |%10.5o|\n", x);

//   	ft_printf("\no: |%-10.5o|\n", x);
//   	ft_printf("o: |%010.5o|\n", x);
//   	ft_printf("o: |%#10.5o|\n", x);

//     //	  negative number

//   	ft_printf("o: |%o|\n", z);
//   	ft_printf("o: |%-o|\n", z);
//   	ft_printf("o: |%0o|\n", z);
//   	ft_printf("o: |%#o|\n", z);

//   	ft_printf("\no: |%15o|\n", z);

//   	ft_printf("o: |%.15o|\n", z);
//   	ft_printf("o: |%20.15o|\n", z);
//   	ft_printf("\no: |%-20.15o|\n", z);
//   	ft_printf("o: |%020.15o|\n", z);
//   	ft_printf("o: |%#20.15o|\n", z);

//   	ft_printf("%s%s%s%s%s", "this", "is", "a", "multi", "string");


//     //	  checking the u_format   проверено на лики

// 	int		x = 42;
// 	int		z = -42;

// 	ft_printf("x: |%x|\n", x);
// 	ft_printf("x: |%-x|\n", x);
// 	ft_printf("x: |%0x|\n", x);
// 	ft_printf("\nx: |%10x|\n", x);
// 	ft_printf("x: |%.5x|\n", x);
// 	ft_printf("x: |%10.5x|\n", x);
// 	ft_printf("\nx: |%-10.5x|\n", x);
// 	ft_printf("x: |%010.5x|\n", x);

// 	ft_printf("|%#x|\n", 0);
// 	ft_printf("|%#08x|\n", 42);


// 	ft_printf("x: |%x|\n", z);
// 	ft_printf("x: |%-x|\n", z);
// 	ft_printf("x: |%0x|\n", z);
// 	ft_printf("\nx: |%10x|\n", z);
// 	ft_printf("x: |%.5x|\n", z);
// 	ft_printf("x: |%10.5x|\n", z);
// 	ft_printf("\nx: |%-10.5x|\n", z);
// 	ft_printf("x: |%010.5x|\n", z);

// 	printf("x: |%x|\n", z);
// 	printf("x: |%-x|\n", z);
// 	printf("x: |%0x|\n", z);
// 	printf("\nx: |%10x|\n", z);
// 	printf("x: |%.5x|\n", z);
// 	printf("x: |%10.5x|\n", z);
// 	printf("\nx: |%-10.5x|\n", z);
// 	printf("x: |%010.5x|\n", z);



//   	//   negative number

//   	ft_printf("u: |%u|\n", z);
//   	ft_printf("u: |%-u|\n", z);
//   	ft_printf("u: |%0u|\n", z);
//   	ft_printf("u: |%#u|\n", z);
//   	ft_printf("\nu: |%15u|\n", z);
//   	ft_printf("u: |%.15u|\n", z);
//   	ft_printf("u: |%20.15u|\n", z);
//   	ft_printf("\nu: |%-20.15u|\n", z);
//   	ft_printf("u: |%020.15u|\n", z);
//   	ft_printf("u: |%#20.15u|\n", z);

//     //  checking the x_format  

//   	int		x = 42;
//   	int		z = -42;


//   	// checking the d_format   проверено на лики
/*
int		x = 42;
int		z = -42;

	ft_printf("|% +d|\n", 42);
	ft_printf("|%+  d|\n", 42);
	ft_printf("|% ++d|", 42);
	printf("%lld", -9223372036854775808);
	ft_printf("%lld", -9223372036854775808);


	ft_printf("|%0+5d|\n", 42);
 	ft_printf("|%05d|\n", -42);
	ft_printf("%0+5d", -42);
	ft_printf("|%-05d|\n", 42);
	ft_printf("|%-05d|\n", -42);
*/
	printf("Pretty Inna's version\n");
	ft_printf("d: |%d|\n", x);
	ft_printf("d: |%+d|\n", x);
	ft_printf("d: |%-d|\n", x);
	ft_printf("d: |% d|\n", x);
	ft_printf("d: |%0d|\n", x);
	ft_printf("\nd: |%10d|\n", x);
	ft_printf("d: |%.5d|\n", x);
	ft_printf("d: |%10.5d|\n", x);
	ft_printf("\nd: |%+10.5d|\n", x);
	ft_printf("d: |%-10.5d|\n", x);
	ft_printf("d: |% 10.5d|\n", x);
	ft_printf("d: |%+10.5d|\n", x);

	printf("bloody computer version\n");
	printf("d: |%d|\n", x);
	printf("d: |%+d|\n", x);
	printf("d: |%-d|\n", x);
	printf("d: |% d|\n", x);
	printf("d: |%0d|\n", x);
	printf("\nd: |%10d|\n", x);
	printf("d: |%.5d|\n", x);
	printf("d: |%10.5d|\n", x);
	printf("\nd: |%+10.5d|\n", x);
	printf("d: |%-10.5d|\n", x);
	printf("d: |% 10.5d|\n", x);
	printf("d: |%+10.5d|\n", x);
// 	//  negative number

// 	ft_printf("\nd: |%d|\n", z);
// 	ft_printf("d: |%+d|\n", z);
// 	ft_printf("d: |%-d|\n", z);
// 	ft_printf("d: |% d|\n", z);
// 	ft_printf("d: |%0d|\n", z);
// 	ft_printf("\nd: |%10d|\n", z);
// 	ft_printf("d: |%.5d|\n", z);
// 	ft_printf("d: |%10.5d|\n", z);
// 	ft_printf("\nd: |%+10.5d|\n", z);
// 	ft_printf("d: |%-10.5d|\n", z);
// 	ft_printf("d: |% 10.5d|\n", z);
// 	ft_printf("d: |%+10.5d|\n", z);

	return (0);
}
