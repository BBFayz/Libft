/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:13:58 by azybert           #+#    #+#             */
/*   Updated: 2017/01/29 16:49:08 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_itoa3(int n, int m, int size)
{
	char	*nbr;
	char	*tmp;

	nbr = (char *)malloc(size);
	if (nbr == NULL)
		return (NULL);
	tmp = nbr;
	if (n < 0)
	{
		*tmp = '-';
		n = -n;
		tmp++;
	}
	while (m > n)
		m = m / 10;
	while (m >= 1)
	{
		*tmp = n / m + 48;
		n = n - (n / m * m);
		tmp++;
		m = m / 10;
	}
	*tmp = '\0';
	return (nbr);
}

static int	ft_itoa2(int n, int m)
{
	int size;
	int signe;

	signe = 0;
	if (n < 0)
	{
		signe = 1;
		n = -n;
	}
	while (m > n)
		m = m / 10;
	size = 1;
	while (m > 0)
	{
		m = m / 10;
		size++;
	}
	return (size + signe);
}

static char	*ft_fdp(void)
{
	char	*nombre;

	nombre = (char *)malloc(12);
	if (nombre == NULL)
		return (NULL);
	*(nombre + 0) = '-';
	*(nombre + 1) = '2';
	*(nombre + 2) = '1';
	*(nombre + 3) = '4';
	*(nombre + 4) = '7';
	*(nombre + 5) = '4';
	*(nombre + 6) = '8';
	*(nombre + 7) = '3';
	*(nombre + 8) = '6';
	*(nombre + 9) = '4';
	*(nombre + 10) = '8';
	*(nombre + 11) = '\0';
	return (nombre);
}

char		*ft_itoa(int n)
{
	char	*nombre;
	int		m;
	int		size;

	m = 1000000000;
	if (n == 0)
	{
		nombre = (char *)malloc(2);
		*nombre = '0';
		*(nombre + 1) = '\0';
		return (nombre);
	}
	if (n == -2147483648)
	{
		nombre = ft_fdp();
		return (nombre);
	}
	size = ft_itoa2(n, m);
	nombre = ft_itoa3(n, m, size);
	return (nombre);
}
