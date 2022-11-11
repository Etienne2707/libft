/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:38 by educlos           #+#    #+#             */
/*   Updated: 2022/11/08 15:44:20 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *s2;
	int i;
	int j;
	int k;

	s2 = malloc(2 * ft_strlen(s1) * sizeof(char));
	if (!s2)
		return NULL;
	i = ft_strlen(set);
	j = 0;
	k = ft_strlen(s1);
	while (i != k - ft_strlen(set))
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	return s2;
}

int	main()
{
	printf("%s\n", ft_strtrim("---etienne---", "---"));
}
