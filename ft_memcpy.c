/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:53:20 by educlos           #+#    #+#             */
/*   Updated: 2022/11/07 16:58:27 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	char *temp;
	char *temp2;
	int i;
	temp = (char *)dest;
	temp2 = (char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = temp2[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char d[4];
	char s[] = "bonjour";
	size_t u = 3;
	printf("%s", (char *) memcpy(d, s, u));
}
