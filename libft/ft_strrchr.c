/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:48:47 by victpier          #+#    #+#             */
/*   Updated: 2022/04/28 16:17:16 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((char)c == str[i])
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "";
	printf("%s\n", ft_strrchr(str, 'a'));
}*/