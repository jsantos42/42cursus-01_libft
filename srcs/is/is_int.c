/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:18:27 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:18:27 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	is_int(char *str)
{
	int		sign;
	long	temp;

	sign = 1;
	temp = 0;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str != '\0')
	{
		if (!ft_isdigit(*str))
			return (0);
		temp *= 10;
		temp += *str++ - '0';
		if (!is_in_range_long(temp * sign, -2147483648, 2147483647))
			return (0);
	}
	if (sign == -1 && temp == 0)
		return (0);
	return (1);
}
