/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:45:26 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/16 18:46:51 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_swapptr(char **ptr, char **ptr2)
{
	char	*tmp;

	tmp = *ptr;
	*ptr  = *ptr2;
	*ptr2 = tmp;
}