/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:34:11 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/02 18:34:56 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	get_and_store_width(const char *format, t_flags *all_flags)
{
	int		i;
	int		width_value;

	i = 0;
	width_value = 0;
	while(format[i])
	{
		if(format[i] == '%')
		{
			i++;
			if (format[i] == '-' || format[i] == '#' || format[i] == '0' ||
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

//parsing. This function just takes and stores the taken value in structure
void	get_and_store_precision(const char *format, t_flags *all_flags)
{
	int		i;
	int		precision_value;

	precision_value  = 0;
	i = 0;
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