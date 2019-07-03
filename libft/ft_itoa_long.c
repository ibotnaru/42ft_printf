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

char		*ft_itoa_long(long long number)
{
	char		*str;
	long long	initial_number;
	int			len;

	len = 0;
	initial_number = number;
	if (number < 0)
	{
		len = 1;
		number = number * (-1);
	}
	while (number > 0)
	{
		number = number / 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (initial_number % 10) + '0';
		initial_number = initial_number / 10;
	}
	return (str);
}
