/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:18:49 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:20:45 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

double	is_in_range_int(double value, double min, double max)
{
	return (value >= min && value <= max);
}

int	is_in_range_long(long value, long min, long max)
{
	return (value >= min && value <= max);
}
