/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:18:44 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:18:44 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
**	Returns the absolute value of the given number.
*/

int	ft_abs_int(int number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}

double	ft_abs_double(double number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
