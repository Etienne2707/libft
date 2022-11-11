/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:00:52 by educlos           #+#    #+#             */
/*   Updated: 2022/11/08 13:34:21 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void*	ft_memchr(const void* tab, int c, size_t s)
{
	int i;
	int* temp;

	i = 0;
	temp = (int *)tab;
	while (i < s)
	{
		if (temp[i] == c)
		{
			return (temp + 1);
		}
		i++;
	}
	return (NULL);
}

