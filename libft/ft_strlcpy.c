/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:42:26 by victpier          #+#    #+#             */
/*   Updated: 2022/04/28 18:49:23 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (c + 1 < size && src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[15];
// 	char orig[] = "Izuna madara";
// 	printf("%u\n", ft_strlcpy(dest, orig, 13));
// 	printf("%s\n", dest);
// 	return (0);
// }
