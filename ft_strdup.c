/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 18:44:02 by azybert           #+#    #+#             */
/*   Updated: 2017/01/20 18:42:44 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t		len;
	char		*new;
	const char	*tmp;

	tmp = s1;
	len = 0;
	while (*s1)
	{
		len++;
		s1++;
	}
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	s1 = tmp;
	while (*s1)
	{
		*new = *s1;
		s1++;
		new++;
	}
	*new = '\0';
	return (new - len);
}
