/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:31:53 by adhondt           #+#    #+#             */
/*   Updated: 2017/12/15 16:47:13 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ne copie pas le caractere recherche
char	*ft_strccpy(char *dest, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src [i] == c)
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
