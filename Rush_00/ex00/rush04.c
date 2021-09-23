#include <unistd.h>

void	ft_putchar(char *str);

void	rush04_first(int x)
{
	int	i;

	i = 1;
	ft_putchar("A");
	while (x >= 1 && i < (x - 1))
	{
		ft_putchar("B");
		i++;
	}
	if (x > 1)
	{
		ft_putchar("C");
	}
	ft_putchar("\n");
}

void	rush04_last(int x)
{
	int	i;

	i = 1;
	ft_putchar("C");
	while (x >= 1 && i < (x - 1))
	{
		ft_putchar("B");
		i++;
	}
	if (x > 1)
	{
		ft_putchar("A");
	}
	ft_putchar("\n");
}

void	rush04_govde(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= (y - 2))
	{
		i = 1;
		ft_putchar("B");
		while (i < (x - 1))
		{
			ft_putchar(" ");
			i++;
		}
		if (x > 1)
		{
			ft_putchar("B");
		}
		ft_putchar("\n");
		j++;
	}
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			rush04_first(x);
		}
		if (y > 2)
		{
			rush04_govde(x, y);
		}
		if (y >= 2)
		{
			rush04_last(x);
		}
	}
}
