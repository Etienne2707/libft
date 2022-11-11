/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:37:37 by educlos           #+#    #+#             */
/*   Updated: 2022/11/11 16:58:13 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp( const void * p1, const void * p2, size_t size)
{
	size_t i;
	int *tmp;
	int *tmp2;

	tmp = (int *)p1;
	tmp2 = (int *)p2;
	i = 0;
	while (i < size)
	{
		if (tmp[i] != tmp2[i])
			return (tmp[i] - tmp2[i]);
		i++;
	}
	return (0);
}


