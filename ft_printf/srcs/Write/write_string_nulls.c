/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string_nulls.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 17:00:11 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 21:15:39 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_write_string_minus_width_nulls(t_format *struct_, va_list args)
{
	int	i;

	i = 0;
	while (struct_->wid-- > 0)
	{
		write(1, " ", 1);
		struct_->len++;
	}
	struct_->flag = ' ';
}

void	ft_write_string_width_nulls(t_format *struct_, va_list args)
{
	int	i;

	i = 0;
	while (struct_->wid-- > 0)
	{
		write(1, " ", 1);
		struct_->len++;
	}
}

void	ft_write_string_with_nulls(t_format *struct_, va_list args)
{
	struct_->wid -= 6;
	if (struct_->precision >= 6 || struct_->precision == -1)
	{
		if (struct_->flag == ' ')
		{
			ft_write_string_width_nulls(struct_, args);
			write(1, "(null)", 6);
		}
		else if (struct_->flag == '-')
		{
			write(1, "(null)", 6);
			ft_write_string_minus_width_nulls(struct_, args);
		}
		struct_->len += 6;
	}
	else
	{
		if (struct_->flag == ' ')
			ft_write_string_width_nulls(struct_, args);
		else if (struct_->flag == '-')
			ft_write_string_minus_width_nulls(struct_, args);
	}
}
