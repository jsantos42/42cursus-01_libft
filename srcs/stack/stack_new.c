/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:18 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:18 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
** Creates a new stack node
** Note: the malloc is for the t_stack type, so that it allocates enough
** memory for every variable inside the struct. Do not malloc just for the
** pointer to the structure (stack) neither for the stack->content.
*/

t_stack	*stack_new(int new_content)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->content = new_content;
	stack->prev = NULL;
	stack->next = NULL;
	return (stack);
}
