/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:15:39 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/11 21:16:07 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static intmax_t	get_d_number(va_list ap, t_flags *all_flags)
{
	intmax_t	number;

	if (all_flags->hh_flag == 1)
		number = (signed char)(va_arg(ap, int));
	else if (all_flags->h_flag == 1)
		number = (short)(va_arg(ap, int));
	else if (all_flags->ll_flag == 1)
		number = (long long)(va_arg(ap, long long int));
	else if (all_flags->l_flag == 1)
		number = (long)(va_arg(ap, long int));
	else
		number = (int)(va_arg(ap, int));
	number = (intmax_t)number;
	return (number);
}


//for positive integer only
//handles only one flag at the time
char        *buffer_d(va_list ap, t_flags *all_flags)
{
	char			*buffer;
	char			*str_num;
	intmax_t		number;
	int				width;
	int				prec;
	int				num_len;

	width = all_flags->width_size;
	prec = all_flags->precision_size;
	number = get_d_number(ap, all_flags);
	str_num = ft_itoa(number);
	num_len = ft_strlen(str_num);
	if ((all_flags->width_flag == 1 && all_flags->precision_flag == 1) && (width > num_len && width > num_len) && (width > prec))
	{
		buffer = ft_strjoin(put_zeroes_precision(all_flags, num_len), str_num);
		if (all_flags->minus_flag == 1)
			buffer = ft_strjoin_free(buffer, put_spaces_width(all_flags, ft_strlen(buffer)), 1);
		else if (all_flags->plus_flag == 1)
		{
			buffer = ft_strjoin("+", buffer);
			buffer = ft_strjoin_free(put_spaces_width(all_flags, ft_strlen(buffer)), buffer, 2);
		}
		else
			buffer = ft_strjoin_free(put_spaces_width(all_flags, ft_strlen(buffer)), buffer, 2);
	}
	else if ((all_flags->width_flag == 1 && all_flags->precision_flag == 0) && all_flags->width_size > num_len)
	{
		if (all_flags->minus_flag == 1)
			buffer = ft_strjoin(str_num, put_spaces_width(all_flags, num_len));
		else if (all_flags->plus_flag == 1)
		{
			buffer = ft_strjoin("+", str_num);
			buffer = ft_strjoin_free(put_spaces_width(all_flags, ft_strlen(buffer)), buffer, 2);
		}
		else if (all_flags->zero_flag == 1)
			buffer = ft_strjoin(put_zeroes_flag(all_flags, num_len),str_num);
		else
			buffer = ft_strjoin(put_spaces_width(all_flags, num_len),str_num);
	}
	else if (((all_flags->width_flag == 0 && all_flags->precision_flag == 1) && prec > num_len) || ((all_flags->width_flag == 1 &&
			all_flags->precision_flag == 1) && (width > prec) && ((width > num_len) && prec > num_len)))
	{
		buffer = ft_strjoin(put_zeroes_precision(all_flags, ft_strlen(str_num)),str_num);
		if (all_flags->plus_flag == 1)
			buffer = ft_strjoin_free("+", buffer, 2);
		else if (all_flags->space_flag == 1)
			buffer = ft_strjoin_free(" ", buffer, 2);
	}
	else
		buffer = ft_strdup(str_num);
	return (buffer);
}

