#include <unistd.h>

int	tum_control(char board[4][4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				if (board[i][j][k] == '0')
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	stampa(char board[4][4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				ft_putchar(board[i][j][k]);
				if (k != 3)
					ft_putchar(',');
				k++;
			}
			j++;
			ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}

void	stampa_2( char board[4][4][4])
{	
	int	i;
	int	j;
	int	k;

	if (tum_control (board) == 1)
	{
		i = -1;
		while (++i < 4)
		{
			j = -1;
			while (++j < 4)
			{
				k = -1;
				while (++k < 4 )
				{
					if (board[i][j][k] == 'x')
						ft_putnbr(k + 1);
				}
				ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
	else
		write(1, "No Solution\n", 12);
}
