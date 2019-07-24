/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:04:46 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/23 14:34:37 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *print_d_positive(t_flags *all_flags, int64_t number) //changed int -> int64
{
    char    *str_num;
    char    *buffer;
    int     num_len;

    str_num = ft_itoa_long(number);
    num_len = ft_strlen(str_num);
    if (all_flags->width_flag == 0 && all_flags->precision_flag == 0)
        buffer = width_off_prec_off_d_positive(all_flags, str_num);
    else if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
        buffer = width_off_prec_on_d_positive(all_flags, str_num, num_len);
    else if(all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        buffer = width_on_prec_off_d_positive(all_flags, str_num);
    else    //width == 1 prec == 1
       buffer = width_on_prec_on_d_positive(all_flags, str_num, num_len);
    return (buffer);
}

char    *print_d_negative(t_flags *all_flags, int64_t number) //changed int -> int 64
{
    char    *str_num;
    char    *buffer;

    number = number * (-1);
    str_num = ft_itoa_long(number);
    if (all_flags->width_flag == 0 && all_flags->precision_flag == 0)
        buffer = ft_strjoin("-", str_num);
    else if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
        buffer = width_off_prec_on_d_negative(all_flags, str_num);
    else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        buffer = width_on_prec_off_d_negative(all_flags, str_num);
    else
        buffer = width_on_prec_on_d_negative(all_flags, str_num);
    return (buffer);
}

char    *return_buffer_d(va_list ap, t_flags *all_flags)
{
    char        *buffer;
    char		*str_num;
	int64_t		number;

	number = get_d_number(ap, all_flags);
    if (number >= 0)
        buffer = print_d_positive(all_flags, number);
    else
        buffer = print_d_negative(all_flags, number);
    return (buffer);
}