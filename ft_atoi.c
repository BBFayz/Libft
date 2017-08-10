/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 13:54:15 by azybert           #+#    #+#             */
/*   Updated: 2017/01/29 11:46:34 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_atoi2(const char *str)
{
	if (*str == '-')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int	num;
	int signe;

	num = 0;
	signe = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
			*str == ' ' || *str == '\r')
		str++;
	if ((*str >= 48 && *str <= 57) || *str == '+' || *str == '-')
	{
		signe = ft_atoi2(str);
		if (*str == '-' || *str == '+')
			str++;
		while (*str >= 48 && *str <= 57 && *str)
		{
			num = num * 10 + (*str - 48);
			str++;
		}
		if (signe == 1)
			num = -num;
	}
	return (num);
}
