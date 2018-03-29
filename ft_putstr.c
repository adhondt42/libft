/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:10:54 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/23 10:57:28 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s, char *end)
{
	if (s)
		write(1, s, ft_strlen(s));
	if (end)
		write(1, end, ft_strlen(end));
	return ;
}
