/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:35:16 by educlos           #+#    #+#             */
/*   Updated: 2022/11/07 15:05:59 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void*	ft_memset(void *s, int c, size_t p)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < p)
	{
		tmp[i] = c;
		i++;
	}
	return(s);
}

int	main()
{
	char t[] = "petite";
	int c = 90;
	size_t j = 4;

	printf("%s",(char *)ft_memset(t, c, j));
}
