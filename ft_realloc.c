/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:46:31 by azybert           #+#    #+#             */
/*   Updated: 2017/08/20 20:05:52 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *to_realloc, size_t new_size)
{
	char	*new;

	if (!(new = malloc(new_size * (sizeof(char *)))))
		return (NULL);
	if (to_realloc != NULL)
	{
		ft_strcpy(new, to_realloc);
		free(to_realloc);
	}
	return (new);
}
