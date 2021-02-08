/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 01:33:52 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 20:50:42 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_clear_splitted(char **trade)
{
	unsigned int	i;

	i = 0;
	while (trade[i])
	{
		free(trade[i]);
		i++;
	}
	free(trade);
	return (NULL);
}

static void	ft_get_trade(char **trade2, unsigned int *trade_len,
					char c)
{
	unsigned int	i;

	i = 0;
	*trade2 += *trade_len;
	*trade_len = 0;
	while (**trade2 && **trade2 == c)
		(*trade2)++;
	while ((*trade2)[i])
	{
		if ((*trade2)[i] == c)
			return ;
		(*trade_len)++;
		i++;
	}
}

static unsigned int	ft_strchr_wannabe(char const *s, char c)
{
	unsigned int	i;
	unsigned int	strchrwannabe;

	i = 0;
	strchrwannabe = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			strchrwannabe++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		strchrwannabe++;
	return (strchrwannabe);
}

char	**ft_split(char const *s, char c)
{
	char			**trade;
	char			*trade2;
	unsigned int	trade_len;
	unsigned int	strchrwannabe;
	unsigned int	i;

	i = 0;
	trade_len = 0;
	if (!s)
		return (NULL);
	trade2 = (char *)s;
	strchrwannabe = ft_strchr_wannabe(s, c);
	trade = (char **)malloc(sizeof(char *) * (strchrwannabe + 1));
	if (trade == NULL)
		return (NULL);
	while (i < strchrwannabe)
	{
		ft_get_trade(&trade2, &trade_len, c);
		trade[i] = (char *)malloc(sizeof(char) * (trade_len + 1));
		if (trade[i] == NULL)
			return (ft_clear_splitted(trade));
		ft_strlcpy(trade[i++], trade2, trade_len + 1);
	}
	trade[i] = NULL;
	return (trade);
}
