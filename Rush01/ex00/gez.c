#include <stdio.h>

void	delete_sil(char board[4][4][4], int i, int k, int j)
{
	int	c;

	c = 0;
	while (c < 4)
	{
		if (c != j)
			board[i][k][c] = '-';
		c++;
	}
}

void	gez(char board[4][4][4])
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		k = 0;
		while (k < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (board[i][k][j] == 'x')
				{
					delete_sil(board, i, k, j);
				}
				j++;
			}
			k++;
		}
		i++;
	}
}

void	bul_deger(char board[4][4][4], int i, int k)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (board[i][k][j] == '0')
		{
			board[i][k][j] = 'x';
		}
		j++;
	}
}

void	gez_2(char board[4][4][4])
{
	int	i;
	int	k;
	int	j;
	int	cont;

	i = 0;
	while (i < 4)
	{
		k = 0;
		while (k < 4)
		{
			j = -1;
			cont = 0;
			while (++j < 4)
			{
				if (board[i][k][j] == '0')
					cont++;
			}
			if (cont == 1)
				bul_deger(board, i, k);
			k++;
		}
		i++;
	}
	gez(board);
}

void	gez_3(char board[4][4][4])
{
	int	i;
	int	k;
	int	j;
	int	cont;

	k = 0;
	while (k < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = -1;
			cont = 0;
			while (++j < 4)
			{
				if (board[i][k][j] == '0')
					cont++;
			}
			if (cont == 1)
				bul_deger(board, i, k);
			i++;
		}
		k++;
	}
	gez(board);
}
