/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:32:44 by azybert           #+#    #+#             */
/*   Updated: 2017/01/27 15:24:48 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*mem;
	char	*mem2;

	if (src == dst)
		return (dst);
	mem = (char *)dst;
	mem2 = (char *)src;
	while (n--)
	{
		*mem = *mem2;
		mem++;
		mem2++;
	}
	return (dst);
}
