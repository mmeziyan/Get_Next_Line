/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:06:21 by mmeziyan          #+#    #+#             */
/*   Updated: 2017/08/14 20:06:23 by mmeziyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 18

# include "libft/libft.h"
# include <stdlib.h>

int	line_creator(char **line, const int fd, char **str, char *buff);
int	get_next_line(int fd, char **line);

#endif
