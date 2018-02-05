/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:26:35 by adhondt           #+#    #+#             */
/*   Updated: 2017/12/19 14:35:51 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *tab, int n)
{
	char	*str;
	int		i;

	if (!(tab) || n <= 0)
		return (NULL);
	i = ft_strlen(tab);
	i = (i > n) ? i = n : i;
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	ft_strncpy (str, tab, i);
	return (str);
}
