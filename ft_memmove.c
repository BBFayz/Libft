/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 13:14:34 by azybert           #+#    #+#             */
/*   Updated: 2017/01/28 17:08:07 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void	ft_memmove2(void *dst, const void *src, size_t len)
{
	char	*mem;
	char	*mem2;
	char	*tmp;

	tmp = (char *)dst;
	mem = (char *)dst;
	mem2 = (char *)src;
	while (--len)
	{
		mem++;
		mem2++;
	}
	while (mem >= tmp)
	{
		*mem = *mem2;
		mem--;
		mem2--;
	}
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*mem;
	char	*mem2;

	if (len == 0)
		return (dst);
	if (dst < src)
	{
		mem = (char *)dst;
		mem2 = (char *)src;
		while (len--)
		{
			*mem = *mem2;
			mem2++;
			mem++;
		}
	}
	else
	{
		ft_memmove2(dst, src, len);
	}
	return (dst);
}
