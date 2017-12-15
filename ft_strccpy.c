/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:31:53 by adhondt           #+#    #+#             */
/*   Updated: 2017/12/15 13:25:11 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dest, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src [i] == c)
		{
			dest[i] = c;
			dest[i + 1] = '\0';
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
