/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:07:12 by educlos           #+#    #+#             */
/*   Updated: 2022/11/08 10:24:01 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp;
	char *temp2;
	char temp3;
	int i;
	temp = (char *)dest;
	temp2 = (char *)src;
	i = 0;
	while (i < n)
	{
		temp3 = temp2[i];
		temp[i] = temp3;
		i++;
	}
	return (dest);
}

int	main()
{
	char d[4];
	char s[] = "bonjour";
	size_t u = 3;
	printf("%s", (char *) ft_memmove(d, s, u));
}
