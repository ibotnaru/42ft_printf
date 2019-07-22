/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_x_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:33:14 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/19 12:33:34 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *flag_zero_on(t_flags *all_flags, char *str_num)
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

char    *flag_hash_on2(t_flags *all_flags, char *str_num)
{
    char *buffer;
    //width = 1 && precision == 1
    buffer = ft_strjoin(put_zeroes(all_flags->precision_size,ft_strlen(str_num)), str_num);
    buffer = ft_strjoin_free("0x", buffer, 2);
    if (all_flags->width_size > all_flags->precision_size)
        buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
    else
        buffer = ft_strdup(buffer);  //??LEAKS
    return (buffer);
    //??return (NULL);
}

char    *flag_hash_on1(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            buffer = ft_strjoin_free("0x", buffer, 2);
        }
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        {    
            buffer = ft_strjoin("0x", str_num);
            buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
        }
        else
            buffer = flag_hash_on2(all_flags, str_num);
    }
    else
        buffer = ft_strjoin("0x", str_num);
    return (buffer);
}

char    *flag_minus_on(t_flags *all_flags, char *str_num)
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

char    *flag_zero_and_hash_on(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
            buffer = ft_strjoin(put_zeroes(all_flags->width_size, (ft_strlen(str_num) + 2)), str_num);
        else
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            if (all_flags->width_size > all_flags->precision_size)
            {
                buffer = ft_strjoin_free("0x", buffer, 2);
                buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
                return (buffer);
            }
            else
                buffer = ft_strdup(buffer);             //??? LEAKS ??? ft_strdup_free();
        }
    }
    else
        buffer = ft_strdup(str_num); //ft_strdup_free();
    buffer = ft_strjoin_free("0x", buffer, 2);
    return (buffer);
}

char    *flag_hash_and_minus_on(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str_num) || all_flags->precision_size > ft_strlen(str_num))
    {
        if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
        else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
            buffer = ft_strjoin(str_num, put_spaces(all_flags->width_size, (ft_strlen(str_num) + 2)));
        else
        {
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, ft_strlen(str_num)), str_num);
            if (all_flags->width_size > all_flags->precision_size)
            {
                buffer = ft_strjoin_free("0x", buffer, 2);
                buffer = ft_strjoin_free(buffer, put_spaces(all_flags->width_size, ft_strlen(buffer)), 1);
                return (buffer);
            }
            else
                buffer = ft_strdup(buffer);             //??? LEAKS ??? ft_strdup_free();
        }
    }
    else
        buffer = ft_strdup(str_num); //ft_strdup_free();
    buffer = ft_strjoin_free("0x", buffer, 2);
    return (buffer);
}