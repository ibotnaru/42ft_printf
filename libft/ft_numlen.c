/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:28:10 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/15 20:07:12 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_numlen(long num, long base)
{
	long	len;

	len = 1;
	while (ft_long_power(base, len) <= num)
		len++;
	return (len);
}