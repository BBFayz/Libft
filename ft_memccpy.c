/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:36:09 by azybert           #+#    #+#             */
/*   Updated: 2017/01/23 22:07:49 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c,
		size_t n)
{
	unsigned char	*mem;
	unsigned char	*mem2;
	int				x;

	mem = (unsigned char *)dst;
	mem2 = (unsigned char *)src;
	x = (unsigned char)c;
	while (n--)
	{
		*mem = *mem2;
		if (*mem == x)
			return (mem + 1);
		mem++;
		mem2++;
	}
	return (NULL);
}
