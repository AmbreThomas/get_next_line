#include "get_next_line.h"

int     main(int argc, char** argv)
{
	char *line;

//get_next_line(fd, &line);
//ft_strdel(&line); // You should free after you're done using your line
	while (get_next_line(fd, &line))
	{
	ft_putstr(line);
	ft_strdel(&line);
	}
	return (0);
}
