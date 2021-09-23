#include <unistd.h>

void	ft_putchar(char *str);

void	rush01_first(int x)
{
	int	i;

	i = 1;
	ft_putchar("/");
	while (x >= 1 && i < (x - 1))
	{
		ft_putchar("*");
		i++;
	}
	if (x > 1)
	{
		ft_putchar("\\");
	}
	ft_putchar("\n");
}

void	rush01_govde(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= (y - 2))
	{
		i = 1;
		ft_putchar("*");
		while (i < (x - 1))
		{
			ft_putchar(" ");
			i++;
		}
		if (x > 1)
		{
			ft_putchar("*");
		}
		ft_putchar("\n");
		j++;
	}
}

void	rush01_last(int x)
{
	int	i;

	i = 1;
	ft_putchar("\\");
	while (x >= 1 && i < (x - 1))
	{
		ft_putchar("*");
		i++;
	}
	if (x > 1)
	{
		ft_putchar("//");
	}
	ft_putchar("\n");
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			rush01_first(x);
		}
		if (y > 2)
		{
			rush01_govde(x, y);
		}
		if (y >= 2)
		{
			rush01_last(x);
		}
	}
}
