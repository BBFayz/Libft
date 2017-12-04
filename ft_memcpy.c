/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:32:44 by azybert           #+#    #+#             */
/*   Updated: 2017/12/04 00:29:25 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	long int	*ldst;
	long int	*lsrc;

	if (n % 8 == 0 && (uintptr_t)dst % 8 == 0 && (uintptr_t)src % 8 == 0)
	{
		ldst = (long int*)dst;
		lsrc = (long int*)src;
		while (n >= 8)
		{
			*(ldst++) = *(lsrc++);
			n -= 8;
		}
	}
	while (n--)
		*(char *)(dst + n) = *(char *)(src + n);
	return (dst);
}
