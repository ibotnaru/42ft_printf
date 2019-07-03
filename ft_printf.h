/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:46:57 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/02 22:35:43 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
#define		FT_PRINTF_H
#include	"libft/libft.h"
#include	<stdio.h>
#include	<stdarg.h>

# define SPECIFIER "csdiuoxpX%"

typedef struct s_flags
{
    char    specifier;
    int     width_size;
    int     width_flag;
    int     precision_size;
    int     precision_flag;
    int     hash_flag;
    int     zero_flag;
    int     minus_flag;
    int     plus_flag;
    int     space_flag;
    int     l_flag;
    int     ll_flag;
    int     h_flag;
    int     hh_flag;
}   t_flags;

int		ft_printf(const char *format, ...);
int		ft_print_c(va_list ap, t_flags *all_flags);
int		ft_print_s(va_list ap, t_flags *all_flags);
void	get_the_flag(const char *format, t_flags *all_flags, int i);
void	get_and_store_width(const char *format, t_flags *all_flags, int i);
void	get_and_store_precision(const char *format, t_flags *all_flags, int i);
void	get_and_store_flag_hash(const char *format, t_flags *all_flags, int i);
void	get_and_store_flag_zero(const char *format, t_flags *all_flags, int i);
void	get_and_store_flag_minus(const char *format, t_flags *all_flags, int i);
void	get_and_store_flag_plus(const char *format, t_flags *all_flags, int i);
void	get_and_store_flag_space(const char *format, t_flags *all_flags, int i);
void	get_and_store_flags_l_ll(const char *format, t_flags *all_flags, int i);
void	get_and_store_flags_h_hh(const char *format, t_flags *all_flags, int i);
void    find_specifier(t_flags *all_flags, char *format, int i);
char	*put_buffer(va_list ap, t_flags *all_flags);
int		ft_print_buffer(char	*buffer);

#endif