/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 13:21:02 by azybert           #+#    #+#             */
/*   Updated: 2017/01/27 20:15:39 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_memalloc(size_t size)
{
	char *mem;
	char *tmp;

	mem = (char *)malloc(size);
	if (mem == NULL)
		return (NULL);
	tmp = mem;
	while (size--)
	{
		*tmp = 0;
		tmp++;
	}
	return (mem);
}
