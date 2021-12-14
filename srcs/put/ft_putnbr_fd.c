/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:12 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:12 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	int_to_char(int n, int sign, int fd)
{
	if (n / 10)
		int_to_char(n / 10, sign, fd);
	ft_putchar_fd((n % 10 * sign) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;

	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	int_to_char(n, sign, fd);
}
