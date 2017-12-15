/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:26:35 by adhondt           #+#    #+#             */
/*   Updated: 2017/12/15 16:40:07 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *tab, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (tab[i] != c && tab[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	ft_strccpy (str, tab, '\n');
	return (str);
}
