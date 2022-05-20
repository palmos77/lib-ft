/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:19:18 by victpier          #+#    #+#             */
/*   Updated: 2022/04/28 18:54:15 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			size_dest;
	size_t			size_src;

	i = 0;
	j = ft_strlen(dest);
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size < 1 || size < size_dest)
		return (size_src + size);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size_dest + size_src);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50] = "aaaaaaaaaaaaaaa";
	char b[] = "iiiiiiiiii";
	char c[] = "aaaaaaaaaaaaaaa";
	char d[] = "iiiiiiiiii";
	printf("mine; %u\n", ft_strlcat(a,b,15));
	printf("real; %lu\n", strlcat(c,d,15));
}
*/
