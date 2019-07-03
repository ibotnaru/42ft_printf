/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 19:50:41 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/07/01 19:54:35 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2, int indx)
{
	char	*mem;
	int		l1;
	int		l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	mem = ft_strnew(l1 + l2);
	if (mem != NULL)
	{
		ft_strcpy(mem, s1);
		ft_strcpy(mem + l1, s2);
	}
    if (indx == 1)
        free(s1);
    else if (indx == 2)
        free(s2);
    else
    {
        free(s1);
        free(s2);
    }
	return (mem);
}