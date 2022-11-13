/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:07:13 by educlos           #+#    #+#             */
/*   Updated: 2022/11/11 17:01:59 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[c])
		{
			while (str[i + c] == to_find[c] && to_find[c] != '\0')
				c++;
			c--;
			if (str[i + c] != to_find[c])
				return (NULL);
			if (to_find[c + 1] == 0)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
