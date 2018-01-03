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
	str = (char *)malloc(sizeof(*str) * (i + 1));
	ft_strncpy (str, tab, n);
	return (str);
}
/*
int main(int argc, char **argv)
{
	char	*str;

	if (argc != 3)
	{
		ft_putstr("argc = 3 : ./a.out str1 n \n");
		return (0);
	}
	str = ft_strndup(argv[1], ft_atoi(argv[2]));
	ft_putstr(str);
return (0);
}
*/
