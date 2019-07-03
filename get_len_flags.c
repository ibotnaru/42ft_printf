/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_len_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:36:16 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/02 18:37:33 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	get_and_store_flags_l_ll(const char *format, t_flags *all_flags)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while ((format[i] != 'd' || format[i] != 'i' ||
			format[i] != 'u' || format[i] != 'o' ||
			format[i] != 'x' || format[i] != 'X') && (format[i] != '\0'))
				i++;
			if (format[i] == 'd' || format[i] == 'i' ||
			format[i] == 'u' || format[i] == 'o' ||
			format[i] == 'x' || format[i] == 'X')
			{
				if (format[i - 1] == 'l' && format[i - 2] == 'l')
				{
					all_flags->ll_flag = 1;
					break ;
				}
				else if (format[i - 1] == 'l')
				{
					all_flags->l_flag = 1;
					break ;
				}
			}
			else
				break ;		
		}
		i++;
	}
}

void	get_and_store_flags_h_hh(const char *format, t_flags *all_flags)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while ((format[i] != 'd' || format[i] != 'i' ||
			format[i] != 'u' || format[i] != 'o' ||
			format[i] != 'x' || format[i] != 'X') && (format[i] != '\0'))
				i++;
			if (format[i] == 'd' || format[i] == 'i' ||
			format[i] == 'u' || format[i] == 'o' ||
			format[i] == 'x' || format[i] == 'X')
			{
				if (format[i - 1] == 'h' && format[i - 2] == 'h')
				{
					all_flags->hh_flag = 1;
					break ;
				}
				else if (format[i - 1] == 'h')
				{
					all_flags->h_flag = 1;
					break ;
				}
			}
			else
				break ;		
		}
		i++;
	}
}