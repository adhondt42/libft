/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:52:11 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/28 20:42:19 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	char	*dest;
	int		i;

	if (!(s1 && s2))
		return (NULL);
	i = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	n = (n > i) ? (n = i) : (n += 0);
	if ((dest = (char *)malloc(sizeof(dest) * (n + 1))) == NULL)
		return (NULL);
	dest[n] = '\0';
	i = 0;
	while (*s1 && n > 0)
	{
		dest[i++] = *s1;
		s1++;
		n--;
	}
	while (*s2 && n > 0)
	{
		dest[i++] = *s2;
		s2++;
		n--;
	}
	return (dest);
}

int	main()
{
	char *tab;
	char *tabd;
	char *dest;

	tab = "az";
	tabd = "rthy";
	dest = ft_strnjoin(tab, tabd, 1);
	ft_putstr(dest);
	ft_putstr("\n");
	dest = ft_strjoin(tab, tabd);
	ft_putstr(dest);
	return (0);
}
