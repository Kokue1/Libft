/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:59:14 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/11 15:37:50 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*trade;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen((char *)string);
	trade = malloc(sizeof(char) * (size + 1));
	if (trade == NULL)
		return (NULL);
	while (string[i])
	{
		trade[i] = string[i];
		i++;
	}
	trade[i] = '\0';
	return (trade);
}
