/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:11:53 by educlos           #+#    #+#             */
/*   Updated: 2022/11/08 14:29:18 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n)
{
	char *temp;
	size_t i;

	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

void * calloc(size_t elementCount, size_t elementSize)
{
	void *tab;
	int i;

	i = 0;
	tab = malloc(elementCount * elementSize);
	ft_bzero(tab, elementSize);
	return (tab);
}

int	main()
{
	printf("%s",(char *)calloc(10, 5));
}

