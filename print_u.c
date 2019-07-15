/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:17:33 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/14 20:11:26 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//this file is in progress

unsigned int        get_u_number(ap, all_flags)     //?
{

}

char                *return_buffer_u(va_list ap, t_flags *all_flags)
{
    char            *buffer;
    char            *str_num;
    unsigned int    number;                         //?

    number = get_u_number(ap, all_flags);
    if (number >= 0)                                //?       
    {
        str_num = ft_itoa(number);                  //?
        if (((all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            && (all_flags->precision_size > ft_strlen(str_num)))
            || ((all_flags->width_flag == 1 && all_flags->precision_flag == 1)
            && (all_flags->width_size > all_flags->precision_size)
            && (all_flags->precision_size > ft_strlen(str_num && all_flags->width_size > ft_strlen(str_num)))))
            buffer = ft_strjoin(put_zeroes_precision(all_flags, ft_strlen(str_num)), str_num);
        else if ((all_flags->width_flag == 1 && all_flags->precision_flag == 1)
            && (all_flags->width_size > ft_strlen(str_num) && all_flags->precision_size > ft_strlen(str_num))
            && (all_flags->precision_size < all_flags->width_size))
        {
            buffer = ft_strjoin(put_zeroes_precision(all_flags, ft_strlen(str_num)), str_num);
            if (all_flags->minus_flag == 1)
                buffer = ft_strjoin_free(buffer, put_spaces_width(all_flags, ft_strlen(buffer)), 1);
            else
                buffer = ft_strjoin_free(put_spaces_width(all_flags, ft_strlen(buffer)), buffer, 2);
        }
        else if ((all_flags->width_flag == 1 && all_flags->precision_flag == 0)
            && (all_flags->width_size > ft_strlen(str_num)))
        {
            if (all_flags->minus_flag == 1)
                buffer = ft_strjoin(put_spaces_width(all_flags, ft_strlen(str_num)), str_num);
            else
                buffer = ft_strjoin(str_num, put_spaces_width(all_flags, ft_strlen(str_num)));
        }
        else
            buffer = ft_strdup(str_num);
    }
    return (buffer);
}