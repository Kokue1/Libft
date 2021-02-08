/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:02:10 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:43:43 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*trade;
	t_list	*trade2;

	if (!lst)
		return ;
	trade = *lst;
	while (trade != NULL)
	{
		trade2 = trade->next;
		ft_lstdelone(trade, del);
		trade = trade2;
	}
	*lst = NULL;
}
