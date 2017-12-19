/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:25:06 by adhondt           #+#    #+#             */
/*   Updated: 2017/12/19 16:32:30 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// faire resultat + 1 si on ne veux pas le charactere rechere
char	*ft_strchr(const char *s, int c)
{
	char	*cs;

	cs = (char *)s;
	while (*cs != c && *cs)
		cs++;
	if (*cs == c)
		return (cs);
	return (NULL);
}
