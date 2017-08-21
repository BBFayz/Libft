/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:39:20 by azybert           #+#    #+#             */
/*   Updated: 2017/08/21 03:35:14 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	ft_putnbr_rec(int n, char *nbr)
{
	if (n / 10 < 0)
		ft_putnbr_rec((n / 10), (nbr + 1));
	else
		*(nbr + 1) = '\0';
	*nbr = ((n % 10) * - 1) + '0';
}

void		ft_putnbr(int n)
{
	char	*nbr;

	if (!(nbr = malloc(sizeof(char *) * 12)))
		return ;
	if (n < 0)
		*(nbr++) = '-';
	else
		n = -n;
	ft_putnbr_rec(n, nbr);
	write(1, nbr, strlen(nbr));
}

int	main(int argc, char **argv)
{
	ft_putnbr(4978515);
}
