/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 13:54:15 by azybert           #+#    #+#             */
/*   Updated: 2017/08/21 02:03:05 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;

	num = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
			*str == ' ' || *str == '\r')
		str++;
	if ((*str >= 48 && *str <= 57) || *str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			str++;
			while (*str && *str >= 48 && *str <= 57)
				num = num * 10 - (*(str++) - 48);
		}
		else
		{
			if (*str == '+')
				str++;
			while (*str && *str >= 48 && *str <= 57)
				num = num * 10 + (*(str++) - 48);
		}
	}
	return (num);
}
