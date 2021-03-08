/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:09:05 by flemos-d          #+#    #+#             */
/*   Updated: 2021/03/01 10:09:08 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *haystack, int needle)
{
	char	*last;

	last = 0;
	if (needle == '\0')
		return ((char *)haystack + ft_strlen(haystack));
	while (*haystack)
	{
		if (*haystack == needle)
		{
			last = ((char *)haystack);
		}
		haystack++;
	}
	return (last);
}
