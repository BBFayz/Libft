/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:46:31 by azybert           #+#    #+#             */
/*   Updated: 2017/08/17 22:13:50 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *to_realloc, size_t old_size, size_t new_size)
{
	void	*new;

	if (!(new = malloc(new_size)))
		return (NULL);
	ft_memcpy(new, src, old_size);
	free(to_realloc);
	return (new);
}