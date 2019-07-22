/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:26:48 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/19 13:40:42 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *return_buffer_x2(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_flag == 1 && all_flags->precision_flag == 1)
    {
        buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)),str_num);
        if (all_flags->width_size > all_flags->precision_size)
            buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
        else
            buffer = ft_strdup(buffer); //LEAKS
    }
    else  if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        buffer = ft_strjoin(put_spaces(all_flags->width_size, ft_strlen(str_num)), str_num);    //LEAKS
    else if (all_flags->precision_flag == 1 && all_flags->width_flag == 0)
        buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);    //LEAKS
    else
        buffer = ft_strdup(str_num);    //LEAKS
    return (buffer);
}

char        *return_buffer_x1(va_list ap, t_flags *all_flags)
{
    int     num;
    char    *str_num;
    char    *buffer;

    num = get_d_number(ap, all_flags);
    str_num = ft_itoa_base(num, HEX, 0);
    if (all_flags->hash_flag == 1 && all_flags->minus_flag == 1)
        buffer = flag_hash_and_minus_on(all_flags, str_num);
    else if (all_flags->hash_flag == 1 && all_flags->zero_flag == 1)
        buffer = flag_zero_and_hash_on(all_flags, str_num);
    else if (all_flags->zero_flag == 1)
        buffer = flag_zero_on(all_flags, str_num);
    else if (all_flags->hash_flag == 1)
        buffer = flag_hash_on1(all_flags, str_num);
    else if(all_flags->minus_flag == 1)
        buffer = flag_minus_on(all_flags, str_num);
    else
        buffer = return_buffer_x2(all_flags, str_num);
    return (buffer);
}

char    *return_buffer_X2(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_flag == 1 && all_flags->precision_flag == 1)
    {
        buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)),str_num);
        if (all_flags->width_size > all_flags->precision_size)
            buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
        else
            buffer = ft_strdup(buffer); //LEAKS
    }
    else  if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        buffer = ft_strjoin(put_spaces(all_flags->width_size, ft_strlen(str_num)), str_num);    //LEAKS
    else if (all_flags->precision_flag == 1 && all_flags->width_flag == 0)
        buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);    //LEAKS
    else
        buffer = ft_strdup(str_num);    //LEAKS
    return (buffer);
}

char        *return_buffer_X1(va_list ap, t_flags *all_flags)
{
    int     num;
    char    *str_num;
    char    *buffer;

    num = get_d_number(ap, all_flags);
    str_num = ft_itoa_base(num, HEX, 1);
    if (all_flags->hash_flag == 1 && all_flags->minus_flag == 1)
        buffer = flag_hash_and_minus_on(all_flags, str_num);
    else if (all_flags->hash_flag == 1 && all_flags->zero_flag == 1)
        buffer = flag_zero_and_hash_on(all_flags, str_num);
    else if (all_flags->zero_flag == 1)
        buffer = flag_zero_on(all_flags, str_num);
    else if (all_flags->hash_flag == 1)
        buffer = flag_hash_on1(all_flags, str_num);
    else if(all_flags->minus_flag == 1)
        buffer = flag_minus_on(all_flags, str_num);
    else
        buffer = return_buffer_X2(all_flags, str_num);
    return (buffer);
}