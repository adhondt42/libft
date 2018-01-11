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
#include <stdio.h>

char	*ft_strcdup(const char *tab, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (tab[i] != c && tab[i])
		i++;
	//printf("\ni:%d\n tab[i - 1]:%c\n tab[i]:%c\n", i, tab[i - 1], tab[i]);
	str = (char *)malloc(sizeof(char) * (i + 2));
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = tab[i];
	//printf("\ni:%d, str[i]:%c\n", i, str[i]);
		i--;
	}
	return (str);
}
