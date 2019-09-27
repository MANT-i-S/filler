/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:45:51 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/23 19:22:21 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "filler.h"
# include <sys/types.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# define BUFF_SIZE 42

int		get_next_line(const int fd, char **line);

#endif
