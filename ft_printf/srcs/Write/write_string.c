/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:35:05 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 21:15:26 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_write_string_minus_width(t_format *struct_, va_list args, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		struct_->len++;
		i++;
	}
	while (struct_->wid-- > 0)
	{
		write(1, " ", 1);
		struct_->len++;
	}
	struct_->flag = ' ';
}

void	ft_write_string_width(t_format *struct_, va_list args, char *str)
{
	int	i;

	i = 0;
	while (struct_->wid-- > 0)
	{
		write(1, " ", 1);
		struct_->len++;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		struct_->len++;
		i++;
	}
}

char	*ft_verify_precision(t_format *struct_, va_list args, char *str, int *j)
{
	if (struct_->precision < 0 || struct_->precision > ft_strlen(str))
		return (str);
	else
		str = ft_substr(str, 0, struct_->precision);
	struct_->precision = -1;
	*j = 1;
	return (str);
}

void	ft_write_string2(t_format *struct_, va_list args, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		struct_->len++;
		i++;
	}
}

void	ft_write_string(t_format *struct_, va_list args)
{
	char	*str;
	int		j;

	j = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		ft_write_string_with_nulls(struct_, args);
	else
	{
		str = ft_verify_precision(struct_, args, str, &j);
		struct_->wid -= ft_strlen(str);
		if (struct_->flag == ' ')
			ft_write_string_width(struct_, args, str);
		else if (struct_->flag == '-')
			ft_write_string_minus_width(struct_, args, str);
		else
			ft_write_string2(struct_, args, str);
	}
	if (j == 1)
		free(str);
}
