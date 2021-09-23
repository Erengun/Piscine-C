int	g_i;
int	g_k;

void	son_bakis_devam(char dizi[16], char board[4][4][4], int i, int k)
{
	if (dizi[i] == '1' && i / 4 == 2 && dizi[i + 4] == '3' )
	{
		if (board[k][0][3] == 'x' && board[k][1][2] == 'x')
		{
			board[k][2][0] = 'x' ;
			board[k][3][1] = 'x' ;
		}
	}
	else if (dizi[i] == '1' && dizi[i - 4] == '3' && i / 4 == 3)
	{
		if (board[k][3][3] == 'x' && board[k][2][2] == 'x')
		{
			board[k][1][0] = 'x' ;
			board[k][0][1] = 'x' ;
		}
	}
}

void	son_bakis(char dizi[16], char board[4][4][4])
{
	g_i = 0;
	while (g_i < 16)
	{
		g_k = g_i % 4;
		if (dizi[g_i] == '1' && g_i / 4 == 0 && dizi[g_i + 4] == '3')
		{
			if (board[0][g_k][3] == 'x' && board[1][g_k][2] == 'x')
			{
				board[2][g_k][0] = 'x' ;
				board[3][g_k][1] = 'x' ;
			}
		}
		else if (dizi[g_i] == '1' && g_i / 4 == 1 && dizi[g_i - 4] == '3' )
		{
			if (board[3][g_k][3] == 'x' && board[2][g_k][2] == 'x')
			{
				board[1][g_k][0] = 'x' ;
				board[0][g_k][1] = 'x' ;
			}
		}
		son_bakis_devam(dizi, board, g_i, g_k);
		g_i++;
	}
}

void	son_bakis_2_devam(char dizi[16], char board[4][4][4], int i, int k)
{
	if (dizi[i] == '1' && i / 4 == 2 && dizi[i + 4] == '3' )
	{
		if (board[k][0][3] == 'x' && board[k][1][0] == 'x')
		{
			board[k][2][2] = 'x' ;
			board[k][3][1] = 'x' ;
		}
	}
	else if (dizi[i] == '1' && dizi[i - 4] == '3' && i / 4 == 3)
	{
		if (board[k][3][3] == 'x' && board[k][2][0] == 'x')
		{
			board[k][1][2] = 'x' ;
			board[k][0][1] = 'x' ;
		}
	}
}

void	son_bakis_2(char dizi[16], char board[4][4][4])
{	
	g_i = 0;
	while (g_i < 16)
	{
		g_k = g_i % 4;
		if (dizi[g_i] == '1' && g_i / 4 == 0 && dizi[g_i + 4] == '3')
		{
			if (board[0][g_k][3] == 'x' && board[1][g_k][0] == 'x')
			{
				board[2][g_k][2] = 'x' ;
				board[3][g_k][1] = 'x' ;
			}
		}
		else if (dizi[g_i] == '1' && g_i / 4 == 1 && dizi[g_i - 4] == '3')
		{
			if (board[3][g_k][3] == 'x' && board[2][g_k][0] == 'x')
			{
				board[1][g_k][2] = 'x' ;
				board[0][g_k][1] = 'x' ;
			}
		}
		son_bakis_2_devam(dizi, board, g_i, g_k);
		g_i++;
	}
}

void	son_bakis_3(char dizi[16], char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 16)
	{
		k = i % 4;
		if (dizi[i] == '2' && i / 4 == 0 && dizi[i + 4] == '2')
		{
			if (board[2][k][3] == 'x' && board[3][k][2] == 'x')
			{
				board[0][k][1] = 'x' ;
				board[1][k][0] = 'x' ;
			}
		}
		else if (dizi[i] == '2' && i / 4 == 2 && dizi[i + 4] == '2' )
		{
			if (board[k][2][3] == 'x' && board[k][3][2] == 'x')
			{
				board[k][0][1] = 'x' ;
				board[k][1][0] = 'x' ;
			}
		}
		i++;
	}
}
