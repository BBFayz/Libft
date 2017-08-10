/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 17:50:00 by azybert           #+#    #+#             */
/*   Updated: 2017/01/27 15:50:56 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem;
	unsigned char	*tmp;
	unsigned int	k;

	if (s1 == s2 || n == 0)
		return (0);
	mem = (unsigned char*)s1;
	tmp = (unsigned char*)s2;
	if (mem == NULL && tmp == NULL)
		return (0);
	k = 0;
	while (k < n)
	{
		if (mem[k] != tmp[k])
			return (mem[k] - tmp[k]);
		k++;
	}
	return (0);
}
