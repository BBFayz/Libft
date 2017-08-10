/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:35:50 by azybert           #+#    #+#             */
/*   Updated: 2017/01/28 12:50:32 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static char	*ft_strjoin2(char const *s1, char const *s2, char *mem)
{
	char *tmp;

	tmp = mem;
	if (s1)
		while (*s1)
		{
			*tmp = *s1;
			tmp++;
			s1++;
		}
	if (s2)
		while (*s2)
		{
			*tmp = *s2;
			tmp++;
			s2++;
		}
	*tmp = '\0';
	return (mem);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*mem;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = 0;
	mem = (char *)s1;
	if (mem)
		while (*mem)
		{
			mem++;
			len++;
		}
	mem = (char *)s2;
	if (mem)
		while (*(mem++))
			len++;
	mem = NULL;
	mem = (char *)malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	mem = ft_strjoin2(s1, s2, mem);
	return (mem);
}
