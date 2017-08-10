/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 16:12:33 by azybert           #+#    #+#             */
/*   Updated: 2017/08/09 22:46:02 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strrev(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	char	*tmp;

	if (s == NULL)
		return (NULL);
	mem = (char *)malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	s = s + start + len;
	tmp = mem;
	while (len--)
	{
		*tmp = *s;
		tmp++;
		s--;
	}
	*tmp = '\0';
	return (mem);
}
