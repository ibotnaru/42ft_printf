/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:31:57 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/21 23:26:21 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *width_on_prec_on_minus_on_s(t_flags *all_flags, char *str, char *new_prec_buf)
{
    char    *buffer;

    if (all_flags->width_size >= ft_strlen(str)) //min on w > strlen 
    {
        if (all_flags->precision_size <= ft_strlen(str)) //<=   //prec > strlen
            buffer = ft_strjoin(new_prec_buf, put_spaces(all_flags->width_size, ft_strlen(new_prec_buf)));
        else
            buffer = ft_strjoin(str, put_spaces(all_flags->width_size, ft_strlen(str)));
    }
    else //w < strlen
    {
        if (all_flags->precision_size >= ft_strlen(str)) //>=   //prec > strlen
            buffer = ft_strdup(str);
        else
            buffer = ft_strdup(new_prec_buf);
    }
    return (buffer);
}

char    *width_on_prec_on_minus_off_s(t_flags *all_flags, char *str, char *new_prec_buf)
{
    char    *buffer;

    if (all_flags->width_size >= ft_strlen(str)) //min on w > strlen 
    {
        if (all_flags->precision_size <= ft_strlen(str)) //<=   //prec > strlen
            buffer = ft_strjoin(put_spaces(all_flags->width_size, ft_strlen(new_prec_buf)), new_prec_buf);
        else
            buffer = ft_strjoin(put_spaces(all_flags->width_size, ft_strlen(str)), str);
    }
    else //w < strlen
    {
        if (all_flags->precision_size >= ft_strlen(str)) //>=   //prec > strlen
            buffer = ft_strdup(str);
        else
            buffer = ft_strdup(new_prec_buf);
    }
    return (buffer);
}

char    *width_on_prec_on_s(t_flags *all_flags, char *str)
{
    char    *buffer;
    char    *new_prec_buf;

    new_prec_buf = str_put_precision(all_flags->precision_size, str);
    if (all_flags->minus_flag == 1)
        buffer = width_on_prec_on_minus_on_s(all_flags, str, new_prec_buf);
    else if (all_flags->minus_flag == 0)
        buffer = width_on_prec_on_minus_off_s(all_flags, str, new_prec_buf);
    else //prec > strlen  w < strlen
        buffer = ft_strdup(str);
    return (buffer);
}

char    *width_off_prec_on_s(t_flags *all_flags, char *str)
{
    char    *buffer;
    char    *new_prec_buf;

    new_prec_buf = str_put_precision(all_flags->precision_size, str);
    if (all_flags->precision_size >= ft_strlen(str))
            buffer = ft_strdup(str);
    else 
        buffer = ft_strdup(new_prec_buf);
    return (buffer);
}

char    *width_on_prec_off_s(t_flags *all_flags, char *str)
{
    char    *buffer;
    if (all_flags->width_size > ft_strlen(str))
    {
        if (all_flags->minus_flag == 1)
            buffer = ft_strjoin(put_spaces(all_flags->width_size, ft_strlen(str)), str);
        else
            buffer = ft_strjoin(str, put_spaces(all_flags->width_size, ft_strlen(str)));
    }
    else
        buffer = ft_strdup(str);
    return (buffer);
}