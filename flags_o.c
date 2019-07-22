/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:35:14 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/21 17:32:33 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *flag_zero_on_o(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
            buffer = ft_strjoin(put_zeroes(all_flags->width_size, ft_strlen(str_num)), str_num);
        else
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            if (all_flags->width_size > all_flags->precision_size)
                buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
            else
                buffer = ft_strdup(buffer);             //??? LEAKS ???
        }
    }
    else
        buffer = ft_strdup(str_num);
    return (buffer);
}

char    *flag_hash_on2_o(t_flags *all_flags, char *str_num)
{
    char *buffer;
    //width = 1 && precision == 1
    buffer = ft_strjoin(put_zeroes(all_flags->precision_size,ft_strlen(str_num)), str_num);
    if (all_flags->width_size > all_flags->precision_size)
        buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
    else
        buffer = ft_strdup(buffer);  //??LEAKS
    return (buffer);
    //??return (NULL);
}

char    *flag_hash_on1_o(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        {    
            buffer = ft_strjoin("0", str_num);
            buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
        }
        else
            buffer = flag_hash_on2_o(all_flags, str_num);
    }
    else
        buffer = ft_strjoin("0", str_num);
    return (buffer);
}

char    *flag_minus_on_o(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
            buffer = ft_strjoin(str_num, put_spaces(all_flags->width_size, ft_strlen(str_num)));
        else
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            if (all_flags->width_size > all_flags->precision_size)
                buffer = ft_strjoin_free(buffer, put_spaces(all_flags->width_size, ft_strlen(buffer)), 1);
            else
                buffer = ft_strdup(buffer);             //??? LEAKS ???
        }
    }
    else
        buffer = ft_strdup(str_num);

    return (buffer);
}

char    *flag_zero_and_hash_on_o(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
            buffer = ft_strjoin(put_zeroes(all_flags->width_size, ft_strlen(str_num)), str_num);
        else
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            if (all_flags->width_size > all_flags->precision_size)
            {
                buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
                return (buffer);
            }
            else
                buffer = ft_strdup(buffer);             //??? LEAKS ??? ft_strdup_free();
        }
    }
    else
        buffer = ft_strjoin("0", str_num); //ft_strdup_free();
    return (buffer);
}

char    *flag_hash_and_minus_on_o(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        {
            buffer = ft_strjoin("0", str_num);
            buffer = ft_strjoin_free(buffer, put_spaces(all_flags->width_size, ft_strlen(buffer)), 1);
        }
        else
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            if (all_flags->width_size > all_flags->precision_size)
            {
                buffer = ft_strjoin_free(buffer, put_spaces(all_flags->width_size, ft_strlen(buffer)), 1);
                return (buffer);
            }
            else
                buffer = ft_strdup(buffer);             //??? LEAKS ??? ft_strdup_free();
        }
    }
    else
        buffer = ft_strjoin("0", str_num); //ft_strdup_free();
    return (buffer);
}