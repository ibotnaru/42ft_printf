/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:57:02 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 00:33:44 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// not ready
#include	"ft_printf.h"

void    find_specifier(t_flags *all_flags, const char *format, int i)
{
    while (((format[i] != 'c' || format[i] != 's' || format[i] != 'd'
	|| format[i] != 'i' || format[i] != 'o' || format[i] != 'x'
	|| format[i] != 'X' || format[i] != 'u' || format[i] != 'p')
	&& format[i] != '\0'))
	{
		if (format[i] == 'c')
			all_flags->specifier = 'c';
		else if (format[i] == 's')
			all_flags->specifier = 's';
		else if (format[i] == 'd' || format[i] == 'i')
			all_flags->specifier = 'd';
		else if (format[i] == 'o')
			all_flags->specifier = 'o';
		else if (format[i] == 'x')
			all_flags->specifier = 'x';
		else if (format[i] == 'X')
			all_flags->specifier = 'X';
		else if (format[i] == 'u')
			all_flags->specifier = 'u';
		else if (format[i] == 'p')
			all_flags->specifier = 'p';
		else if (all_flags->specifier != '\0')
			break;
        i++;
	}
    return ;    //returns nothing
}

void	get_the_flag(const char *format, t_flags *all_flags, int i)
{
	get_and_store_width(format, all_flags, i);
	get_and_store_precision(format, all_flags, i);
	get_and_store_flag_hash(format, all_flags, i);
	get_and_store_flag_zero(format, all_flags, i);
	get_and_store_flag_minus(format, all_flags, i);
	get_and_store_flag_plus(format, all_flags, i);
	get_and_store_flag_space(format, all_flags, i);
	get_and_store_flags_l_ll(format, all_flags, i);
	get_and_store_flags_h_hh(format, all_flags, i);
}

char	*put_buffer(va_list ap, t_flags *all_flags)
{
	char	*buffer;

	if (all_flags->specifier == 'c')
		return (buffer = return_buffer_c(ap, all_flags));
	else if (all_flags->specifier == 's')
		return (buffer = return_buffer_s(ap, all_flags));
	 //if (all_flags->specifier == 'd' || all_flags->specifier == 'i')
		 //return (buffer = return_buffer_d(ap, all_flags));
	else if (all_flags->specifier == 'o')
		return (buffer = return_buffer_o1(ap, all_flags));
	else if (all_flags->specifier == 'x')
		return (buffer = return_buffer_x1(ap, all_flags));
	else if (all_flags->specifier == 'X')
		return (buffer = return_buffer_X1(ap, all_flags));
	//else if (all_flags->specifier == 'u')
		//return (buffer = return_buffer_u(ap, all_flags));
	else if (all_flags->specifier == 'p')
		return (buffer = return_buffer_p(ap, all_flags));
    else
        return (NULL);
}

int		ft_print_buffer(char	*buffer)
{
	int		i;

	i = 0;
	while (buffer[i])
	{
		write(1, &buffer[i], 1);
		i++;
	}
	return(ft_strlen(buffer));
}

static int		jump_index(const char *format, int i, t_flags *all_flag)
{
	int count;

	count = 0;
	if (all_flag->specifier == '%')
		count = count + 1;
	while (format[i] != all_flag->specifier)
	{
		i++;
		count++;
	}
	return (count);
}

int		ft_printf(const char *format, ...)
{
    va_list         ap;
    t_flags         all_flags;
    int             i;
	int				result;
	char			*buffer;

    va_start(ap, format);
    ft_bzero(&all_flags, sizeof(t_flags));      //set the zero to all data in the structure
    i = 0;
	result = 0;
    while (format[i] != '\0')
    {
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar('%');
			i = i + 2;
		}
        if (format[i] == '%')
        {
            find_specifier(&all_flags, format, i);
            get_the_flag(format, &all_flags, i);
			buffer = put_buffer(ap, &all_flags);
			ft_putstr(buffer);
			free(buffer);				//!
			i += jump_index(format, i, &all_flags);
			// result += ft_print_buffer(buffer);
        }
		else
		{
			ft_putchar(format[i]);
			result++;
		}
		i++;
    }
    va_end(ap);
	return (result);
}