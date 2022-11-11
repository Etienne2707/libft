/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:59:40 by educlos           #+#    #+#             */
/*   Updated: 2022/11/11 11:42:09 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void * memmove( void * destination, const void * source, size_t size )
{
	char const dest;
	char const src;
	int i;

	i = 0;
	if (dest < src)
	{
		while (src[i] != '\0')

