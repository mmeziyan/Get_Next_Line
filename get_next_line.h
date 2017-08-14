#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 18

#include "libft/libft.h"
#include <stdlib.h>

typedef struct	s_tatic
{
	char	*s;
	int		ret;
}				t_tatic;

// int	ft_stock2line(char **stock, char **line);
int	read_f(char **line, const int fd, char **stock, char *str);
int	get_next_line(int fd, char **line);

#endif