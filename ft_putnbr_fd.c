/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:39:20 by azybert           #+#    #+#             */
/*   Updated: 2017/01/29 13:19:57 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_putnbr2_fd(int n, int fd)
{
	int	k;

	n = -n;
	k = '-';
	write(fd, &k, 1);
	return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	int	m;
	int k;

	if (n == 0 || n == -2147483648)
	{
		if (n == 0)
			write(fd, "0", 1);
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		return ;
	}
	m = 1000000000;
	if (n < 0)
		n = ft_putnbr2_fd(n, fd);
	while (n / m == 0)
		m = m / 10;
	while (m != 0)
	{
		k = n / m;
		n = n - (k * m);
		k = k + 48;
		write(fd, &k, 1);
		m = m / 10;
	}
}
