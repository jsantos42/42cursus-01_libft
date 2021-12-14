/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:20 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:20 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
**	determines the number of elements on the stack
*/

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size += 1;
		stack = stack->next;
	}
	return (size);
}
