/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_d_u_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:14:14 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/23 14:32:01 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int64_t	get_d_number(va_list ap, t_flags *all_flags)
{
	int64_t	number;

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
	number = (int64_t)number;
	return (number);
}

uint64_t	get_u_number(va_list ap, t_flags *all_flags)
{
	uint64_t	number;

	if (all_flags->hh_flag == 1)
		number = (unsigned char)(va_arg(ap, int));
	else if (all_flags->h_flag == 1)
		number = (unsigned short)(va_arg(ap, int));
	else if (all_flags->ll_flag == 1)
		number = (unsigned long long)(va_arg(ap, long long int));
	else if (all_flags->l_flag == 1)
		number = (unsigned long)(va_arg(ap, long int));
	else
		number = (unsigned int)(va_arg(ap, int));
	number = (uint64_t)number;
	return (number);
}

/* //if previous function doesnt work, try this one
uint64_t	get_u_number(va_list ap, t_flags *all_flags)
{
	uint64_t	number;

	if (all_flags->hh_flag == 1)
		number = (unsigned char)(va_arg(ap, unsigned int));
	else if (all_flags->h_flag == 1)
		number = (unsigned short)(va_arg(ap, unsigned int));
	else if (all_flags->ll_flag == 1)
		number = (unsigned long long)(va_arg(ap, unsigned long long));
	else if (all_flags->l_flag == 1)
		number = (unsigned long)(va_arg(ap, unsigned long));
	else
		number = (unsigned int)(va_arg(ap, unsigned int));
	number = (uint64_t)number;
	return (number);
}
*/