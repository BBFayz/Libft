/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:09:03 by azybert           #+#    #+#             */
/*   Updated: 2017/01/21 13:49:56 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*mem;

	mem = (char *)s;
	while (*mem)
	{
		if (*mem == (char)c)
			return (mem);
		mem++;
	}
	if ((char)c == '\0')
		return (mem);
	return (NULL);
}
