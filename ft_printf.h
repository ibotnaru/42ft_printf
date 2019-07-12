/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:46:57 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/11 21:25:32 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
#define		FT_PRINTF_H
#include	"libft/libft.h"
#include	<stdio.h>
#include	<stdarg.h>

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

int     ft_printf(const char *format, ...);
int     ft_print_c(va_list ap, t_flags *all_flags);
int     ft_print_s(va_list ap, t_flags *all_flags);
void    get_the_flag(const char *format, t_flags *all_flags);
void    get_and_store_width(const char *format, t_flags *all_flags);
void    get_and_store_precision(const char *format, t_flags *all_flags);
void    get_and_store_flag_hash(const char *format, t_flags *all_flags);
void    get_and_store_flag_zero(const char *format, t_flags *all_flags);
void    get_and_store_flag_minus(const char *format, t_flags *all_flags);
void    get_and_store_flag_plus(const char *format, t_flags *all_flags);
void    get_and_store_flag_space(const char *format, t_flags *all_flags);
void    get_and_store_flags_l_ll(const char *format, t_flags *all_flags);
void    get_and_store_flags_h_hh(const char *format, t_flags *all_flags);
void    find_specifier(t_flags *all_flags, const char *format, int i);
char    *put_buffer(va_list ap, t_flags *all_flags);
int     ft_print_buffer(char	*buffer);
char    *put_zeroes_precision(t_flags *all_flags, int num_len);
char    *put_zeroes_flag(t_flags *all_flags, int num_len);
char    *put_sign(char  sign);
char    *put_spaces_width(t_flags *all_flags, int num_len);
char    *put_spaces_flag(t_flags *all_flags, int num_len);
// char    *buffer_c(va_list ap, t_flags *all_flags);
// char    *buffer_s(va_list ap, t_flags *all_flags);
char    *buffer_d(va_list ap, t_flags *all_flags);
// char    *buffer_o(va_list ap, t_flags *all_flags);
// char    *buffer_x(va_list ap, t_flags *all_flags);
// char    *buffer_X(va_list ap, t_flags *all_flags);
// char    *buffer_u(va_list ap, t_flags *all_flags);
// char    *buffer_p(va_list ap, t_flags *all_flags);

#endif