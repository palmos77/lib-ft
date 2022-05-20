/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:35:22 by victpier          #+#    #+#             */
/*   Updated: 2022/04/28 16:16:09 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if ((char)c == str[i])
			return (&str[i]);
		i++;
	}
	if ((char)c == str[i])
		return (&str[i]);
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "lami et pas le stylo";
	printf("%s\n", ft_strchr(str, 'y'));
}
*/