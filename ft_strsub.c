/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:03:52 by azybert           #+#    #+#             */
/*   Updated: 2017/12/04 05:15:49 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;

	if (s == NULL)
		return (NULL);
	if (!(mem = (char *)malloc(len + 1)))
		return (NULL);
	ft_strncpy(mem, s + start, len);
	*(char *)(s + start + len - 1) = '\0';
	return (mem);
}
