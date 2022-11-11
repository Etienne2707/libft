/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:21:27 by educlos           #+#    #+#             */
/*   Updated: 2022/11/08 11:25:32 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *str, int c)
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

int	main()
{
	printf("%s\n",ft_strchr("tienne", 101));
}
