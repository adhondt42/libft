/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:54:29 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/24 00:57:26 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchrrev(char *s, char c)
{
	int		i;

	if (!s || !c)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		s[i] = '\0';
		return (s);
	return (NULL);
}
