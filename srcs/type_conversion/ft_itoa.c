/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:44 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:44 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
**	Parameters:
**	1. The integer to convert.
**
**	Allocates and returns a string representing the integer received as an
**	argument. Negative numbers must be handled.
**	It returns the string representing the integer (or NULL if malloc fails).
*/

static int	is_negative(int n);
static int	how_many_digits(int n);

char	*ft_itoa(int n)
{
	int		begin;
	int		sign;
	int		n_digits;
	char	*string;
	int		iterator;

	begin = 0;
	sign = is_negative(n);
	n_digits = how_many_digits(n);
	if (n < 0)
		n_digits += 1;
	string = malloc((n_digits + 1) * sizeof(char));
	if (!string)
		return (0);
	if (sign < 0)
		string[begin++] = '-';
	iterator = n_digits - 1;
	while (iterator >= begin)
	{
		string[iterator--] = (n % 10) * sign + '0';
		n /= 10;
	}
	string[n_digits] = '\0';
	return (string);
}

static int	is_negative(int n)
{
	if (n < 0)
		n = -1;
	else
		n = 1;
	return (n);
}

static int	how_many_digits(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
