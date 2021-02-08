/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:35:05 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/03 22:17:54 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_write_char_minus_width(t_format *struct_, va_list args, int str)
{
	write(1, &str, 1);
	struct_->len++;
	while (struct_->wid-- > 1)
	{
		write(1, " ", 1);
		struct_->len++;
	}
	struct_->flag = ' ';
}

void	ft_write_char_width(t_format *struct_, va_list args, int str)
{
	while (struct_->wid-- > 1)
	{
		write(1, " ", 1);
		struct_->len++;
	}
	write(1, &str, 1);
	struct_->len++;
}

void	ft_write_char(t_format *struct_, va_list args)
{
	int	str;

	str = va_arg(args, int);
	if (struct_->flag == ' ' && struct_->wid > 1)
		ft_write_char_width(struct_, args, str);
	else if (struct_->flag == '-')
		ft_write_char_minus_width(struct_, args, str);
	else
	{
		write(1, &str, 1);
		struct_->len++;
	}
}
