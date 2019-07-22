/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:25:29 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/15 20:04:46 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_long_power(long num, long pow)
{
	if (pow == 0)
		return (1);
	else if (pow < 0)
		return (0);
	return (num * ft_power(num, pow - 1));
}