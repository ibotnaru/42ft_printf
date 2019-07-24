/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:19:10 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/23 19:28:53 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not ready 

#ifndef		FT_PRINTF_H
#define		FT_PRINTF_H
#define HEX     16
#define OCTET   8
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
void    get_the_flag(const char *format, t_flags *all_flags, int i);
void    get_and_store_width(const char *format, t_flags *all_flags, int i);
void    get_and_store_precision(const char *format, t_flags *all_flags, int i);
void    get_and_store_flag_hash(const char *format, t_flags *all_flags, int i);
void    get_and_store_flag_zero(const char *format, t_flags *all_flags, int i);
void    get_and_store_flag_minus(const char *format, t_flags *all_flags, int i);
void    get_and_store_flag_plus(const char *format, t_flags *all_flags, int i);
void    get_and_store_flag_space(const char *format, t_flags *all_flags, int i);
void    get_and_store_flags_l_ll(const char *format, t_flags *all_flags, int i);
void    get_and_store_flags_h_hh(const char *format, t_flags *all_flags, int i);
void    find_specifier(t_flags *all_flags, const char *format, int i);
char    *put_buffer(va_list ap, t_flags *all_flags);
int     ft_print_buffer(char	*buffer);
char    *put_zeroes_precision(t_flags *all_flags, int num_len);
char    *put_zeroes_flag(t_flags *all_flags, int num_len);
char    *put_zeroes(int len_flag, int len_strnum);
char    *put_sign(char  sign);
char    *put_spaces_width(t_flags *all_flags, int num_len);
char    *put_spaces_flag(t_flags *all_flags, int num_len);
char    *put_spaces(int len_flag, int len_strnum);
char    *return_buffer_o1(va_list ap, t_flags *all_flags);
char    *return_buffer_o2(t_flags *all_flags, char *str_num);
char    *return_buffer_x1(va_list ap, t_flags *all_flags);
char    *return_buffer_x2(t_flags *all_flags, char *str_num);
char    *return_buffer_X1(va_list ap, t_flags *all_flags);
char    *return_buffer_X2(t_flags *all_flags, char *str_num);

//char    *return_buffer_u(va_list ap, t_flags *all_flags);

char    *flag_zero_on(t_flags *all_flags, char *str_num);
char    *flag_hash_on1(t_flags *all_flags, char *str_num);
char    *flag_hash_on2(t_flags *all_flags, char *str_num);
char    *flag_minus_on(t_flags *all_flags, char *str_num);
char    *flag_zero_and_hash_on(t_flags *all_flags, char *str_num);
char    *flag_hash_and_minus_on(t_flags *all_flags, char *str_num);

char    *flag_zero_on_o(t_flags *all_flags, char *str_num);
char    *flag_hash_on1_o(t_flags *all_flags, char *str_num);
char    *flag_hash_on2_o(t_flags *all_flags, char *str_num);
char    *flag_minus_on_o(t_flags *all_flags, char *str_num);
char    *flag_zero_and_hash_on_o(t_flags *all_flags, char *str_num);
char    *flag_hash_and_minus_on_o(t_flags *all_flags, char *str_num);

int64_t	get_d_number(va_list ap, t_flags *all_flags);

char    *return_buffer_s(va_list ap, t_flags *all_flags);
char    *width_on_prec_on_s(t_flags *all_flags, char *str);
char    *return_buffer_s(va_list ap, t_flags *all_flags);
char    *width_on_prec_on_s(t_flags *all_flags, char *str);
char    *str_put_precision(int precision, char *str);
char    *width_off_prec_on_s(t_flags *all_flags, char *str);
char    *width_on_prec_off_s(t_flags *all_flags, char *str);
char    *width_on_prec_on_minus_on_s(t_flags *all_flags, char *str, char *new_prec_buf);
char    *width_on_prec_on_minus_off_s(t_flags *all_flags, char *str, char *new_prec_buf);

char	*return_buffer_c(va_list ap, t_flags *all_flags);

char    *return_buffer_p(va_list ap, t_flags *all_flags);

char    *return_buffer_d(va_list ap, t_flags *all_flags);
char    *print_d_positive(t_flags *all_flags, int64_t number);
char    *print_d_negative(t_flags *all_flags, int64_t number);
char    *width_off_prec_off_d_positive(t_flags *all_flags, char  *str_num);
char    *width_on_prec_off_d_positive(t_flags *all_flags, char *str_num);
char    *width_off_prec_on_d_positive(t_flags *all_flags, char *str_num, int num_len);
char    *width_on_prec_on_d_positive(t_flags *all_flags, char *str_num, int num_len);
char    *width_on_prec_on2_d_positive(t_flags *all_flags, char *str_num, int num_len);

char    *print_d_negative(t_flags *all_flags, int64_t number);
char    *width_off_prec_on_d_negative(t_flags *all_flags, char *str_num);
char    *width_on_prec_off_d_negative(t_flags *all_flags, char *str_num);
char    *width_on_prec_on_d_negative(t_flags *all_flags, char *str_num);
char    *put_d_buff(t_flags *all_flags, char *str_num);

uint64_t	get_u_number(va_list ap, t_flags *all_flags);
//uint64_t	get_u_number(va_list ap, t_flags *all_flags);

char    *return_buffer_u(va_list ap, t_flags *all_flags);
char    *print_u(t_flags *all_flags, uint64_t number);
char    *width_off_prec_on_u(t_flags *all_flags, char *str_num);
char    *width_on_prec_off_u(t_flags *all_flags, char *str_num);
char    *width_on_prec_on_u(t_flags *all_flags, char *str_num);

#endif