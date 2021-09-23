void	yok_olus(char board[4][4][4], int kap, int y, int d)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[y][i][kap] != 'x' )
			board[y][i][kap] = '-';
		if (board[i][d][kap] != 'x' )
			board[i][d][kap] = '-';
		i++;
	}
}

void	bul(char board[4][4][4], int kap)
{
	int	i;
	int	k;

	i = 0;
	while (i < 4)
	{
		k = 0;
		while (k < 4)
		{
			if (board[i][k][kap] == 'x' )
				yok_olus(board, kap, i, k);
			k++;
		}
		i++;
	}
}
