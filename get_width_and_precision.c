/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width_and_precision.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:24:52 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/21 15:50:32 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	get_and_store_width(const char *format, t_flags *all_flags, int i)
{
	int		width_value;

	width_value = 0;
	while(format[i])
	{
		if(format[i] == '%')
		{
			i++;
			if (format[i] > '0' && format[i] <= '9')
			{
				width_value = ft_atoi(&format[i]);
				all_flags->width_flag = 1;
				break ;
			}
			while (format[i] == '-' || format[i] == '#' || format[i] == '0' ||
				format[i] == '+' || format[i] == ' ')
				i++;
			if (format[i] >= '0' && format[i] <= '9')
			{
				width_value = ft_atoi(&format[i]);
				all_flags->width_flag = 1;
				break ;
			}
		}
		i++;
	}
	all_flags->width_size = width_value;
}

void	get_and_store_precision(const char *format, t_flags *all_flags, int i)
{
	int		precision_value;

	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[i] != '.' && format[i] != '\0')
				i++;
			if (format[i] == '.')
			{
				i++;
				if (format[i] >= '0' && format[i] <= '9')
				{
					precision_value = ft_atoi(&format[i]);
					all_flags->precision_flag = 1;					//we have precision here, otherwise we dont have a precision
					break ;
				}
			}
			else
				break ;
		}
		i++;
	}
	all_flags->precision_size = precision_value;					//precision's value can be 0 with the flag on or the flag off both
}