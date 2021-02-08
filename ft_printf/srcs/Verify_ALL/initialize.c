/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:48:04 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 18:20:19 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

void	initialize(t_format *struct_, const char *format)
{
	struct_->format = (char *)format;
	struct_->len = 0;
	struct_->count = 0;
	struct_->wid = 0;
	struct_->size = ft_strlen(format);
	struct_->flag = ' ';
	struct_->precision = -1;
	struct_->twinkletoes = ' ';
}
