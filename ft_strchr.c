/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:25:06 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/28 23:27:12 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cs;

	if (!s)
		return (NULL);
	cs = (char *)s;
	while (*cs != c && *cs)
		cs++;
	if (*cs == c)
		return (cs);
	return (NULL);
}
