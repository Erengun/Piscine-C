#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = -1;
	argc++;
	while (argv[0][++i])
		write(1, &argv[0][i], 1);
	return (0);
}
