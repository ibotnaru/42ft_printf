/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:51:57 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 00:11:01 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *str_put_precision(int precision, char *str)
{
    char    *new_prec_buf;
    int     i;

    i = 0;
    if (precision < ft_strlen(str))
    {
        
        new_prec_buf = ft_strnew(precision + 1);
        while (precision > 0)
        {
            new_prec_buf[i] = str[i];
            i++;
            precision--; 
        }
        new_prec_buf[i] = '\0';
        return (new_prec_buf);
    }
    else
        return (NULL);
}

char    *return_buffer_s(va_list ap, t_flags *all_flags)
{
    char    *buffer;
    char    *str;

    str = va_arg(ap, char *);
    if (all_flags->width_flag == 1 && all_flags->precision_flag == 1)
        buffer = width_on_prec_on_s(all_flags, str);
    else if (all_flags->width_flag == 0 && all_flags->precision_flag == 1)
        buffer = width_off_prec_on_s(all_flags, str);
    else if (all_flags->width_flag == 1 && all_flags->precision_flag == 0)
        buffer = width_on_prec_off_s(all_flags, str);
    else
        buffer = ft_strdup(str);
    return (buffer);
}

char		*return_buffer_c(va_list ap, t_flags *all_flags)
{
	char    *buffer;
    char    character;

    character = (char)va_arg(ap, int);
    buffer = ft_strnew(2);
    buffer[0] = character;
    buffer[1] = '\0';
    if (all_flags->width_flag == 1 && all_flags->width_size > 1)
    {
        if (all_flags->minus_flag == 1)
            buffer = ft_strjoin(buffer, put_spaces(all_flags->width_size, 1));  //leaks
        else
            buffer = ft_strjoin(put_spaces(all_flags->width_size, 1), buffer);  //leaks
    }
    else
        buffer = ft_strdup(buffer);     //leaks
    return (buffer);
}