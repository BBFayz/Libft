/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 19:39:15 by azybert           #+#    #+#             */
/*   Updated: 2017/01/27 16:02:53 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	k;

	k = 0;
	while (src[k] && k < len)
	{
		dst[k] = src[k];
		k++;
	}
	while (k < len)
	{
		dst[k] = '\0';
		k++;
	}
	return (dst);
}
