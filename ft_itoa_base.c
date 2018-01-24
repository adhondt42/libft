/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:44:47 by adhondt           #+#    #+#             */
/*   Updated: 2018/01/24 18:46:52 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	char	*string;
	int		temp;
	int		count;
	int		array;

	count = 0;
	temp = value;
	while (temp != 0)
	{
		count++;
		temp /= base;
	}
	string = (char *)malloc(sizeof(char) * (count + 1));
	string[count--] = '\0';
	while (value != 0)
	{
		string[count] = value % base;
		string[count] > 9 ? string[count--] += 55 : (string[count--] += '0');
		value /= base;
	}
	return (string);
}

int		main()
{
	ft_putstr(ft_itoa_base(41453,8));
	return (0);
}
