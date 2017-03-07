#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 32

int     get_next_line(const int fd, char **line);

#endif
