#include <unistd.h>

void	initboard(char *input);

int	checksintax(char *input)
{
	int	i;
	int	err;

	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '4')
			err++;
		i++;
	}
	if (err > 2)
		return (0);
	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '1')
			err++;
		i++;
	}
	if (err != 4)
		return (0);
	return (1);
}

char	checkinput(char *arg, char input[16])
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (checksintax(arg) == 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
			{
				input[out] = (arg[i]);
				out++;
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	input[16];

	if (argc == 2)
	{
		if (checkinput(argv[1], input) == 16)
			initboard(input);
		else
			write(1, "\nERROR\n\n", 8);
	}
	else
		write(1, "\nERROR fazla parametre\n", 23);
	return (0);
}
