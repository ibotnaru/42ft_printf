/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:32:52 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/11 20:18:23 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	get_and_store_flag_hash(const char *format, t_flags *all_flags)
{
	int		i;
	int		flag_on;

	i = 0;
	flag_on = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '#')
			{
				flag_on = 1;							//turning on the flag
				break ;
			}
			else
				break ;
		}
		i++;
	}
	all_flags->hash_flag = flag_on;
}

void	get_and_store_flag_zero(const char *format, t_flags *all_flags)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '0')
			{
				all_flags->zero_flag = 1;				//same. Turning on the flag as in prevoius function just in different way
				break;
			}
			else
				break ;
		}
		i++;
	}
}

void	get_and_store_flag_minus(const char *format, t_flags *all_flags)
{
	int		i;
	int		flag_on;

	i = 0;
	flag_on = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '-')
			{
				flag_on = 1;
				break;
			}
			else
				break ;
		}
		i++;
	}
	all_flags->minus_flag = flag_on;
}

void	get_and_store_flag_plus(const char *format, t_flags *all_flags)
{
	int		i;
	int		flag_on;

	i = 0;
	flag_on = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '+')
			{
				flag_on = 1;
				break;
			}
			else
				break ;
		}
		i++;
	}
	all_flags->plus_flag = flag_on;
}

void	get_and_store_flag_space(const char *format, t_flags *all_flags)
{
	int		i;
	int		flag_on;

	i = 0;
	flag_on = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
			{
				flag_on= 1;
				break;
			}
			else
				break ;
		}
		i++;
	}
	all_flags->space_flag = flag_on;
}
