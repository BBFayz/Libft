/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 02:11:34 by azybert           #+#    #+#             */
/*   Updated: 2017/08/22 06:17:26 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_cpy(char *f, char *s)
{
	char	*new;
	char	*mem;

	if (!(new = malloc(sizeof(char *) * (ft_strlen(f) + ft_strlen(s) + 1))))
		return (NULL);
	mem = new;
	while (*f)
		*(mem++) = *(f++);
	while (*s)
		*(mem++) = *(s++);
	*mem = '\0';
	return (new);
}