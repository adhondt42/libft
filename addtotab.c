/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addtotab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 10:35:01 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/12 10:58:31 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**addtotab(char **tab, char *str)
{
	int	tablen;
	char **ret;

	tablen = ft_tablen(tab);
	printf("tablen:%d\n", tablen);
	if ((ret = (char **)malloc(sizeof(char *) * (tablen + 2))) == NULL)
		return NULL;
	ret[tablen + 1] = NULL;
	ret[tablen] = ft_strdup(str);
	while (--tablen >= 0){
		printf("tablen:%d\n", tablen);
		ret[tablen] = ft_strdup(tab[tablen]);
	}
	return (ret);
}
