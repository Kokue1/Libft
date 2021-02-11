/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:53:39 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/11 15:29:55 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*trade;

	trade = malloc(nitems * size);
	if (trade == NULL)
		return (NULL);
	ft_bzero(trade, nitems * size);
	return (trade);
}
