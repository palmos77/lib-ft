/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:45:21 by victpier          #+#    #+#             */
/*   Updated: 2022/04/28 17:55:44 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_is_in_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_is_in_set(s1[j], set) == 1)
		j--;
	trim = ft_substr(s1, i, (j - i + 1));
	if (!trim)
		return (NULL);
	return (trim);
}
