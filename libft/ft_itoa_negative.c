/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_negative.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:15:44 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/12 16:16:56 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa_negative(int num)
{
    char    *str;

    if (num < 0)
    {
        num = num * (-1);
        str = ft_itoa(num);
    }
    else 
        str = ft_itoa(num);
    return (str);
}