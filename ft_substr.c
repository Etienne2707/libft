/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:30:41 by educlos           #+#    #+#             */
/*   Updated: 2022/11/11 17:05:02 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *s2;
	char *temp;
	size_t i;

	i = 0;
	temp = (char *)s;
	s2 = malloc (len * sizeof(char));
	if (!s2)
		return NULL;
	while (i < len)
	{
		s2[i] = temp[i + start];
		i++;
	}
	return (s2);
}


