/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_d_positive.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:05:01 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 20:07:47 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *width_off_prec_off_d_positive(t_flags *all_flags, char  *str_num)
{
    char    *buffer;
    if (all_flags->plus_flag == 1)
        buffer = ft_strjoin("+", str_num);
    else if (all_flags->space_flag == 1)
        buffer = ft_strjoin(" ", str_num);
    else
        buffer = ft_strdup(str_num);
    return (buffer);
}

char    *width_on_prec_off_d_positive(t_flags *all_flags, char *str_num)
{
    char    *buffer;
    buffer = ft_strdup(str_num);
    if (all_flags->zero_flag == 1)
    {
        if (all_flags->plus_flag == 1 || all_flags->space_flag == 1)
            buffer = ft_strjoin(put_zeroes(all_flags->width_size, (ft_strlen(str_num) + 1)), buffer);
        else
            buffer = ft_strjoin(put_zeroes(all_flags->width_size, ft_strlen(str_num)), buffer);
    }
    if (all_flags->plus_flag == 1)
        buffer = ft_strjoin_free("+", buffer, 2);
    else if (all_flags->space_flag == 1)
        buffer = ft_strjoin_free(" ", buffer, 2);
    if (all_flags->minus_flag == 1)
        buffer = ft_strjoin_free(buffer, put_spaces(all_flags->width_size, ft_strlen(buffer)), 1);
    else
        buffer = ft_strjoin_free(put_spaces(all_flags->width_size,ft_strlen(buffer)), buffer, 2);
    return (buffer);
}

char    *width_off_prec_on_d_positive(t_flags *all_flags, char *str_num, int num_len)
{
    char    *buffer;
    if (all_flags->precision_size <= num_len)
        buffer = ft_strdup(str_num);
    else
        buffer = ft_strjoin(put_zeroes(all_flags->precision_size, num_len), str_num);
    if (all_flags->plus_flag == 1 || all_flags->space_flag == 1)
    {
        if (all_flags->plus_flag == 1)
            buffer = ft_strjoin_free("+", buffer, 2);
        else
            buffer = ft_strjoin_free(" ", buffer, 2);
    }
    else
        buffer = ft_strdup(buffer); //leaks
    return (buffer);
}