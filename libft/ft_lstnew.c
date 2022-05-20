/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victpier <victpier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:10:55 by victpier          #+#    #+#             */
/*   Updated: 2022/05/18 14:29:41 by victpier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_new;

	lst_new = malloc(sizeof(*lst_new));
	if (!lst_new)
		return (NULL);
	lst_new->content = (void *)content;
	lst_new->next = NULL;
	return (lst_new);
}
