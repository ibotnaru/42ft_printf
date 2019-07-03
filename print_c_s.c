/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:14:18 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/02 18:58:02 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int		ft_print_s(va_list ap, t_flags *all_flags)
{
	char	*str;
	int		how_many_chars_printf_returns;
	int		i;
	int		counter;

	str = va_arg(ap, char *);
	i = 0;
	counter = 0;
	if (all_flags->width_flag == 1)
	{
		if ((all_flags->precision_flag == 1) && (all_flags->precision_size <= ft_strlen(str)))
		{
			if (all_flags->minus_flag == 1)
			{
				while (counter < all_flags->precision_size)
				{
						ft_putchar(str[i]);
						i++;
						counter++;
					
				}
				while (counter < all_flags->width_size)
				{
					ft_putchar(' ');
					counter++;
				}
			}
			else
			{
				i = 0;
				while (i < (all_flags->width_size - all_flags->precision_size))
				{
					ft_putchar(' ');
					i++;
				}
				i = 0;
				while (i < all_flags->precision_size)
				{
					ft_putchar(str[i]);
					i++;				
				}
			}
		}
		else
		{
			i = 0;
			counter = 0;
			if (all_flags->minus_flag == 1)
			{
				while (counter < ft_strlen(str))
				{
					ft_putchar(str[i]);
					i++;
					counter++;
				}
				while (counter < all_flags->width_size)
				{
					ft_putchar(' ');
					counter++;
				}
			}
			else
			{
				i = 0;
				counter = 0;
				while (counter < (all_flags->width_size - ft_strlen(str)))
				{
					ft_putchar(' ');
					counter++;
				}
				while (counter < all_flags->width_size)
				{
					ft_putchar(str[i]);
					i++;
					counter++;
				}
			}
			
		}
	}
	else
	{
		i = 0;
		if (all_flags->precision_flag == 1)
		{
			while (i < all_flags->precision_size)
			{
				ft_putchar(str[i]);
				i++;
			}	
		}
		else
		{
			while (i < ft_strlen(str))
			{
				ft_putchar(str[i]);
				i++;
			}
		}		
	}
	return(0);
}

int		ft_print_c(va_list ap, t_flags *all_flags)
{
	char	character;
	int		i;
	int		width;

	i = 0;
	width = all_flags->width_size;
	character = va_arg(ap, int);
	if (all_flags->minus_flag == 1)
	{
		ft_putchar(character);
		while (i < width)
		{
			ft_putchar(' ');
			i++;
		}
	}
	else
	{
		while (i < width)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar(character);
	}
	return (i + 1);								//how_many_chars_printf_returns
}