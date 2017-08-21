/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:13:58 by azybert           #+#    #+#             */
/*   Updated: 2017/08/21 05:41:27 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_rec(int n, char *nbr)
{
	if (n / 10 != 0)
		ft_itoa_rec(n / 10, nbr--);
	*nbr = n % 10 + ;
}

char		*ft_itoa(int n)
{
	char	*nbr;

	if (!(nbr = malloc(sizeof(char *) * 12)))
		return (NULL);
	*(nbr + 11) = '\0';
	if (n >= 0)
		nbr = ft_itoa_rec_pos(n, (nbr + 10));
	else
		nbr = ft_itoa_rec_neg(n, (nbr + 10));
	write(1, nbr, strlen(nbr));
	free(nbr);
}
