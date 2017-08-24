/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:13:58 by azybert           #+#    #+#             */
/*   Updated: 2017/08/24 03:13:16 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa3(int n, int magnitude, char *nbr)
{
	if (magnitude < 0)
	{
		*nbr = n / magnitude + '0';
		ft_itoa3(n % magnitude, magnitude / 10, nbr + 1);
	}
	else
		*nbr = '\0';
}

static void	ft_itoa2(int n, int magnitude, char *nbr)
{
	if (magnitude > 0)
	{
		*nbr = n / magnitude + '0';
		ft_itoa2(n % magnitude, magnitude / 10, nbr + 1);
	}
	else
		*nbr = '\0';
}

char		*ft_itoa(int n)
{
	int		magnitude;
	char	*nbr;

	if (!(nbr = malloc(sizeof(char *) * 12)))
		return (NULL);
	if (n >= 0)
	{
		magnitude = 1;
		while (magnitude <= (n / 10))
			magnitude = magnitude * 10;
		ft_itoa2(n, magnitude, nbr);
	}
	else if (n < 0)
	{
		magnitude = -1;
		while (magnitude >= (n / 10))
			magnitude = magnitude * 10;
		*nbr = '-';
		ft_itoa3(n, magnitude, nbr + 1);
	}
	return (nbr);
}
