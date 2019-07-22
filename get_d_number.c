/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_d_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:14:14 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/19 13:42:13 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int32_t	get_d_number(va_list ap, t_flags *all_flags)
{
	int32_t	number;

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
	number = (int32_t)number;
	return (number);
}