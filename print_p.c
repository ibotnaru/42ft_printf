/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 00:18:07 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/22 00:44:05 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uint64_t		ft_power_p(uint64_t nb, int pow)
{
	if (pow == 0)
		return (1);
	else if (pow < 0)
		return (0);
	return (nb * ft_power_p(nb, pow - 1));
}

uint64_t	ft_long_power_p(uint64_t num, long pow)
{
	if (pow == 0)
		return (1);
	else if (pow < 0)
		return (0);
	return (num * ft_power_p(num, pow - 1));
}

uint64_t	ft_biglen(uint64_t num, int base)
{
	uint64_t	len;

	len = 1;
	while (ft_long_power_p(base, len) <= num)
		len++;
	return (len);
}

char	*ft_itoa_base_long(uint64_t num, int base, int uppercase)
{
	char	        *str;
	int		        i;
	uint64_t		len;

	if (base < 2 || base > 16 || (base != 10 && num <= 0))
		return (NULL);
	if (base == 10)
		return (ft_itoa(num));
	len = ft_biglen(num, base);
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		if (base > 10 && (num % base >= 10) && uppercase)
			str[i++] = (num % base) - 10 + 'A';
		else if (base > 10 && (num % base >= 10))
			str[i++] = (num % base) - 10 + 'a';
		else
			str[i++] = (num % base) + '0';
		num /= base;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}

char    *return_buffer_p(va_list ap, t_flags *all_flags)
{
    char        *buffer;
    void        *p;
    uint64_t    add_p;

    p = va_arg(ap, void *);
    add_p = (uint64_t)(&p);
    buffer = ft_itoa_base_long(add_p, HEX, 0);
    buffer = ft_strjoin("0x", buffer);  //leaks
    return (buffer);
}