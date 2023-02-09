/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:02:32 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/06 14:23:41 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_arg_c(char	**buffer, va_list c, char	**str_final)
{
	size_t 				index_src;
	unsigned	char	character;
	
	character = va_args(args, char)
	index_src = add_buffer_string(buffer, character);
	if (index_src != -1)
	{
		add_str(str_final, buffer, BUFFER_SIZE_PRINTF);
		ft_bzero(buffer, BUFFER_SIZE);
	}
}
