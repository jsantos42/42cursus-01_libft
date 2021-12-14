/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:18:45 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:18:46 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

double	ft_power(double base, double exp)
{
	if (exp == 0)
		return (1);
	if (exp > 0)
		return (base * ft_power(base, exp - 1));
	else
	{
		base = 1 / base;
		exp *= -1;
		return (base * ft_power(base, exp - 1));
	}
}
