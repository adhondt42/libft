/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:26:35 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/23 11:42:09 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *tab, int n)
{
	char	*dest;
	char	*src;
	int		i;

	src = (char *)tab;
	i = 0;
	while (src[i] != '\0')
		i++;
	if ((dest = (char*)malloc(sizeof(*src) * (i + 1))) == NULL)
		return (NULL);
	
	dest[i] = '\0';
	while (i-- >= 0)
		dest[i] = src[i];
	return (dest);
}