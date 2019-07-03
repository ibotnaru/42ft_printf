/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_substrings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:07:12 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/02 17:20:25 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// all done and normed 

#include "ft_printf.h"

char    *put_zeroes_precision(t_flags *all_flags, int num_len)
{
    char    *buff_zeroes_precision;
    int     how_many_zeroes;
    int     i;
    
    if (all_flags->precision_flag == 1 && all_flags->precision_size > num_len)
    {
        how_many_zeroes = all_flags->precision_size - num_len;
        buff_zeroes_precision = ft_strnew(how_many_zeroes + 1);
        i = 0;
        while (how_many_zeroes >  0)
        {
            buff_zeroes_precision[i] = "0";
            i++;
            how_many_zeroes--;
        }
        buff_zeroes_precision[i] = '\0';
        return (buff_zeroes_precision);
    }
    else
        return (NULL);
}

char    *put_zeroes_flag(t_flags *all_flags, int num_len)
{
    char    *buff_zeroes_flag;
    int     how_many_zeroes;
    int     i;
    
    if (all_flags->zero_flag == 1 && (all_flags->precision_flag == 1 \ 
    && all_flags->precision_size > num_len))
    {
        how_many_zeroes = all_flags->width_size - num_len;
        buff_zeroes_flag = ft_strnew(how_many_zeroes + 1);
        i = 0;
        while (how_many_zeroes >  0)
        {
            buff_zeroes_flag[i] = "0";
            i++;
            how_many_zeroes--;
        }
        buff_zeroes_flag[i] = '\0';
        return (buff_zeroes_flag);
    }
    else
        return (NULL);
}

char    *put_sign(char  sign)
{
    char    *buff_sign;
    int     i;

    buff_sign = malloc(sizeof(char) * 2);
    i = 0;
    if (sign == '+' || sign == '-')
    {
        if (sign == '+')
            buff_sign[i] = "+";
        else if (sign == '-')
            buff_sign[i] = "-";
        buff_sign[++i] = '\0';

        return (buff_sign);
    }
    else
        return (NULL);
}

char    *put_spaces_width(t_flags *all_flags, char *buff_len)
{
    char    *buff_spaces_width;
    int     how_many_spaces;
    int     i;

    how_many_spaces = all_flags->width_size - ft_strlen(buff_len);
    i = 0;
    buff_spaces_width = ft_strnew(how_many_spaces + 1); 
    if ((all_flags->width_flag == 1 && all_flags->precision_flag == 1 && \
    all_flags->width_size > all_flags->precision_size && all_flags->width_size > ft_strlen(buff_len)) || \
    (all_flags->width_flag == 1 && all_flags->precision_flag == 0 && \ 
    all_flags->zero_flag == 0 && all_flags->width_size > ft_strlen(buff_len)))
    {
        while (i < how_many_spaces)
        {
            buff_spaces_width[i] = " ";
            i++;
        }
        buff_spaces_width[i] = '\0';
        return (buff_spaces_width);
    }
    else
        return (NULL);
}

char    *put_spaces_flag(t_flags *all_flags, int num_len)
{
    char    *buff_spaces_flag;
    int     i;

    buff_spaces_flag = malloc(sizeof(char) * 2);
    i = 0;
    if (all_flags->precision_flag == 1 && all_flags->precision_size > num_len \
    && all_flags->precision_size > all_flags->width_size)
    {
        buff_spaces_flag[i] = " ";
        buff_spaces_flag[++i] = '\0';
        return (buff_spaces_flag);
    }
    else
        return (NULL);
}