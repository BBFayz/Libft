/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 16:40:37 by azybert           #+#    #+#             */
/*   Updated: 2017/01/31 17:04:12 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdstr(char const **s)
{
	unsigned int	k;
	unsigned int	i;

	k = 0;
	i = 0;
	if (s == NULL)
		return ;
	while (s[k] != NULL)
	{
		while (s[k][i] != '\0')
		{
			write(1, &s[k][i], 1);
			i++;
		}
		k++;
		write(1, "\n", 1);
	}
}
