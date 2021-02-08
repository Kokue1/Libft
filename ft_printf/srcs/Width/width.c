/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:50:16 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 21:14:56 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_save_width(t_format *struct_, va_list args)
{
	char	*temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(struct_));
	if (temp == NULL)
		return ;
	*temp = struct_->format[struct_->count];
	while (ft_isdigit(struct_->format[struct_->count]))
		temp[i++] = struct_->format[struct_->count++];
	struct_->wid = ft_atoi(temp);
	struct_->count -= 1;
	free(temp);
}

void	ft_verify_star(t_format *struct_, va_list args)
{
	if (ft_strchr(TWINKLETOES, struct_->format[struct_->count]))
		struct_->twinkletoes = '*';
}

void	ft_width(t_format *struct_, va_list args)
{
	ft_verify_star(struct_, args);
	if (struct_->twinkletoes == ' ')
		ft_save_width(struct_, args);
	else
		struct_->wid = va_arg(args, int);
	if (struct_->wid < 0)
	{
		struct_->wid *= -1;
		struct_->flag = '-';
	}
}
