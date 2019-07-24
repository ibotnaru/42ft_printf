/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_d_positive2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:18:34 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 21:50:02 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *width_on_prec_on2_d_positive(t_flags *all_flags, char *str_num, int num_len)
{
    char    *buffer;
    if (all_flags->precision_size > num_len)
    {
        buffer = ft_strjoin(put_zeroes(all_flags->precision_size, num_len), str_num);
        if (all_flags->plus_flag == 1 || all_flags->space_flag == 1)
        {
            if (all_flags->plus_flag == 1)
                buffer = ft_strjoin_free("+", buffer, 2);
            else
                buffer = ft_strjoin_free(" ", buffer, 2);
        }
    }
    else
        buffer = ft_strdup(str_num);    //leaks
    return (buffer);
}

char    *width_on_prec_on_d_positive(t_flags *all_flags, char *str_num, int num_len)
{
    char    *buffer;
    if (all_flags->width_size > num_len)
    {
        if (all_flags->precision_size > num_len)
            buffer = ft_strjoin(put_zeroes(all_flags->precision_size, num_len), str_num);
        else
            buffer = ft_strdup(str_num);
        if (all_flags->plus_flag == 1 || all_flags->space_flag == 1)
        {
            if (all_flags->plus_flag == 1)
                buffer = ft_strjoin_free("+", buffer, 2);
            else
                buffer = ft_strjoin_free(" ", buffer, 2);
        }
        if (all_flags->minus_flag == 1)
            buffer = ft_strjoin_free(buffer, put_spaces(all_flags->width_size, ft_strlen(buffer)), 1);
        else
            buffer = ft_strjoin_free(put_spaces(all_flags->width_size, ft_strlen(buffer)), buffer, 2);
    }
    else
        buffer = width_on_prec_on2_d_positive(all_flags, str_num, num_len);
    return (buffer);
}