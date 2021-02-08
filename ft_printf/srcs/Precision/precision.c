/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:50:16 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 21:16:06 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	ft_save_precision(t_format *struct_, va_list args)
{
	char	*temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(struct_));
	if (temp == NULL)
		return ;
	while (ft_isdigit(struct_->format[struct_->count]))
		temp[i++] = struct_->format[struct_->count++];
	struct_->precision = ft_atoi(temp);
	struct_->count -= 1;
	free(temp);
}

void	ft_verify_twinkletoes(t_format *struct_, va_list args)
{
	struct_->count++;
	if (ft_strchr(TWINKLETOES, struct_->format[struct_->count]))
		struct_->twinkletoes = '*';
}

void	ft_precision(t_format *struct_, va_list args)
{
	ft_verify_twinkletoes(struct_, args);
	if (struct_->twinkletoes == ' ')
		ft_save_precision(struct_, args);
	else if (struct_->twinkletoes == '*')
		struct_->precision = va_arg(args, int);
}
