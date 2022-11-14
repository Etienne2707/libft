/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:21:27 by educlos           #+#    #+#             */
/*   Updated: 2022/11/14 11:46:29 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int i;
	char *temp;

	temp = (char *)str;
	i = 0;
	while (str[i] != '\0')
		i++;
	while ( i != 0)
	{
		if (temp[i] == c)
			return (temp + i);
		i--;
	}
	return (NULL);
}