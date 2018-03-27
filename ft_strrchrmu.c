/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:54:29 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/27 20:30:55 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strrchrmu(const char *s, int c)
{
	int		i;
	int		j;
	char	*cs;
	char	*ret;

	j = 0;
	cs = (char *)s;
	i = ft_strlen(s);
	while (i >= 0 && cs[i] != (char)c)
		i--;
	if (cs[i] == (const char)c)
	{
		i++;
		ret = ft_strdup(cs + i);
		return ((char *)ret);
	}
	return (NULL);
}
