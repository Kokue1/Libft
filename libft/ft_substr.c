/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:07:53 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:56:05 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*trade;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		trade = malloc(1 * sizeof(char));
		if (trade == NULL)
			return (NULL);
		trade[0] = '\0';
		return (trade);
	}
	trade = malloc((len + 1) * sizeof(char));
	if (trade == NULL)
		return (NULL);
	while (i < ft_strlen(s) && len-- > 0)
		trade[j++] = s[i++];
	trade[j] = '\0';
	return (trade);
}
