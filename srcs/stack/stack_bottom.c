/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bottom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:15 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:15 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
**	Gets the bottom element of a stack, passed as a pointer to its top element.
*/

t_stack	*stack_bottom(t_stack *top_element)
{
	t_stack	*bottom;

	bottom = top_element;
	while (bottom->next)
		bottom = bottom->next;
	return (bottom);
}
