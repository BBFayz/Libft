/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:39:20 by azybert           #+#    #+#             */
/*   Updated: 2017/08/12 04:58:51 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr2(int n)
{
	int	k;

	n = -n;
	k = '-';
	write(1, &k, 1);
	return (n);
}

void		ft_putnbr(int n)
{
	int	m;
	int k;

	if (n == 0 || n == -2147483648)
	{
		if (n == 0)
			write(1, "0", 1);
		if (n == -2147483648)
			write(1, "-2147483648", 11);
		return ;
	}
	m = 1000000000;
	if (n < 0)
		n = ft_putnbr2(n);
	while (n / m == 0)
		m = m / 10;
	while (m != 0)
	{
		k = n / m;
		n = n - (k * m);
		k = k + 48;
		write(1, &k, 1);
		m = m / 10;
	}
}
