/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azybert <azybert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:30:30 by azybert           #+#    #+#             */
/*   Updated: 2017/10/21 01:36:27 by azybert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft.h"
# define BUFF_SIZE 256

typedef struct	s_node
{
	int				fd;
	int				to_read;
	int				ended;
	char			*next_line;
	struct s_node	*next;
}				t_node;

typedef struct	s_list
{
	struct s_node	*first;
}				t_list;

int				get_next_line(const int fd, char **line);

#endif
