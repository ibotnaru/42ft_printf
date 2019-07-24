/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:32:52 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 18:01:44 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	get_and_store_flag_hash(const char *format, t_flags *all_flags, int i)
{
	int		flag_on;

	flag_on = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			 i++;
			while (format[i] != all_flags->specifier)
			{
				if (format[i] == '#')
				{
					flag_on = 1;
					break ;
				}
				else
					i++;
			}
		}
		i++;
	}
	all_flags->hash_flag = flag_on;
}

void	get_and_store_flag_zero(const char *format, t_flags *all_flags, int i)
{
	int		flag_on;

	flag_on = 0;
	while (format[i] != all_flags->specifier && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] != all_flags->specifier)
			{
				if (format[i] == '0' && !(format[i - 1] > '0'  && format[i - 1] <= '9'))
				{
					flag_on = 1;
					break;
				}
				else
					//break ;
				i++;
			}
		}
		i++;
	}
	all_flags->zero_flag = flag_on;
}

void	get_and_store_flag_minus(const char *format, t_flags *all_flags, int i)
{
	int		flag_on;

	flag_on = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] != all_flags->specifier)
			{
				if (format[i] == '-')
				{
					flag_on = 1;
					break;
				}
				else
					//break ;
				i++;
			}
		}
		i++;
	}
	all_flags->minus_flag = flag_on;
}

void	get_and_store_flag_plus(const char *format, t_flags *all_flags, int i)
{
	int		flag_on;

	flag_on = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] != all_flags->specifier)
			{
				if (format[i] == '+')
				{
					flag_on = 1;
					break;
				}
				else
					//break ;
				i++;
			}
		}
		i++;
	}
	all_flags->plus_flag = flag_on;
}

void	get_and_store_flag_space(const char *format, t_flags *all_flags, int i)
{
	int		flag_on;

	flag_on = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] != all_flags->specifier)
			{
				if (format[i] == ' ')
				{
					flag_on= 1;
					break;
				}
				else
					//break ;
				i++;
			}
		}
		i++;
	}
	all_flags->space_flag = flag_on;
}
