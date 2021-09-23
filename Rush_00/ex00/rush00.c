#include <unistd.h>

void	ft_putchar(char *str);

void	rush00_firstandlast(int x)
{
	int	i;
	int	k;
	int	z;

	i = 1;
	k = 1;
	z = x - 2;
	if (x > 0)
	{
		ft_putchar("o");
		while (k <= z)
		{
			ft_putchar("-");
			k++;
		}
		if (x > 1)
		{
			ft_putchar("o");
		}
		ft_putchar("\n");
	}
}

void	rush00_body(int x, int y)
{
	int	i;
	int	k;

	i = 1;
	while (i <= y - 2)
	{
		k = 1;
		ft_putchar("|");
		while (k <= x - 2 )
		{
			ft_putchar(" ");
			k++;
		}
		if (x > 1)
		{
			ft_putchar("|");
		}
		ft_putchar("\n");
		i++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		rush00_firstandlast(x);
		rush00_body(x, y);
		if (y > 1)
		{
			rush00_firstandlast(x);
		}
	}
}
