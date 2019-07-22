/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:32:45 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/17 14:31:36 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int num, int base, int uppercase)
{
	char	*str;
	int		i;
	int		len;

	if (base < 2 || base > 16 || (base != 10 && num < 0))
		return (NULL);
	if (base == 10)
		return (ft_itoa(num));
	len = ft_numlen(num, base);
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