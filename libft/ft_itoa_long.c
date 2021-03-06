/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:03:58 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/06/17 17:03:58 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len_long(int64_t n)
{
	int		nbrc;
	int		len;

	len = 0;
	nbrc = n;
	while (nbrc != 0)
	{
		nbrc = nbrc / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa_long(int64_t n)
{
	int		sign;
	int		len;
	char	*str;

	len = (n < 0 ? 1 : 0) + ft_len_long(n);
	sign = n < 0 ? -1 : 1;
	if (!(str = malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	str[len] = '\0';
		if (n == -2147483648)
	{
		n = -214748364;
		str[--len] = '8';
	}
	n = (n < 0) ? -n : n;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	if (sign < 0)
		str[len - 1] = '-';
	return (str);
}

