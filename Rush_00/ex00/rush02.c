#include <unistd.h>

void	ft_putchar(char *str);

void	rush02_first(int x)
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
		ft_putchar("A");
	}
	ft_putchar("\n");
}

void	rush02_govde(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= (y - 2))
	{
		j = 1;
		ft_putchar("B");
		while (j < (x - 1))
		{
			ft_putchar(" ");
			j++;
		}
		if (x > 1)
		{
			ft_putchar("B");
		}
		ft_putchar("\n");
		i++;
	}
}

void	rush02_last(int x)
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
		ft_putchar("C");
	}
	ft_putchar("\n");
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			rush02_first(x);
		}
		if (y > 2)
		{
			rush02_govde(x, y);
		}
		if (y >= 2)
		{
			rush02_last(x);
		}
	}
}
