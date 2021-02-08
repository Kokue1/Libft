/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:02:23 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:54:02 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trade;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!s2 && s1)
		return ((char *)s1);
	k = ft_strlen(s1) + ft_strlen(s2);
	trade = malloc(k + 1 * sizeof(trade));
	if (trade == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		trade[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		trade[i++] = s2[j++];
	trade[i] = '\0';
	return (trade);
}
