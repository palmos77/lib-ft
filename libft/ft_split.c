/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:12:07 by victpier          #+#    #+#             */
/*   Updated: 2022/05/18 16:48:11 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_identic(char c, char sep)
{
	if (sep == c)
		return (1);
	return (0);
}

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && ft_identic(s[i], c))
			i++;
		else
		{
			words++;
			while (s[i] && ft_identic(s[i], c) == 0)
				i++;
		}
	}
	return (words);
}

int	ft_strrlen(char const *s, char sep, int a)
{
	int	i;

	i = a;
	while (s[i] && ft_identic(s[i], sep) == 0)
		i++;
	return (i);
}

int	ft_copy(char *dest, char const *s, char sep, int i)
{
	int	j;

	j = 0;
	while (s[i] && ft_identic(s[i], sep) != 1)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		a;

	i = 0;
	tab = (char **)malloc(sizeof(tab) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (0);
	a = 0;
	while (s[i])
	{
		if (ft_identic(s[i], c) == 1)
			i++;
		else
		{
			tab[a] = malloc(sizeof(char) * (ft_strrlen(s, c, i) + 1));
			if (!tab)
				return (0);
			i = ft_copy(tab[a], s, c, i);
			a++;
		}
	}
	tab[a] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int c, char *v[])
{
	int i = 0;
	char **tab;

	if (c!=2)
		return (0);
	tab = ft_split(v[1], ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/