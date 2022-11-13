/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:11:53 by educlos           #+#    #+#             */
/*   Updated: 2022/11/11 17:04:46 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t total;
	char *mem;
	size_t i;

	total = count * size;
	mem = malloc(total);
	if (mem == NULL || (count * size) / count != size)
		return (NULL);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;		
	}
	return (mem);
}


