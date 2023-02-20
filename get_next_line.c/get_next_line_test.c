#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(int ac, char **av)
{

	char	*str;
	int		fd;

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	str = get_next_line(fd);
	if (!str)
		return (0);
	while (str)
	{
		printf("%s", str);
	 	free(str);
		str = get_next_line(fd);
	}
	close (fd);
}

//version bonus 

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(int ac, char **av)
{

	char	*str;
    char    *str2;
	int		fd;
    int     fd2;

	if (ac != 3)
		return (0);
	fd = open(av[1], O_RDONLY);
    fd2 = open(av[2], O_RDONLY);
	str = get_next_line(fd);
    str2 = get_next_line(fd2);
	if (!str || !str2)
		return (0);
	while (str && str2)
	{
		printf("%s", str);
        printf("%s", str2);
	 	free(str);
		free(str2);
		str = get_next_line(fd);
        str2 = get_next_line(fd2);
	}
	close (fd);
    close (fd2);
}
