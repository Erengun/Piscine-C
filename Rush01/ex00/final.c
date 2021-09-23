int	g_i;
int	g_j;
int	g_k;
int	g_toplam;

int	final(char board[4][4][4])
{
	g_i = -1;
	while (++g_i < 4)
	{
		g_j = -1;
		g_toplam = 0;
		while (++g_j < 4)
		{
			g_k = -1;
			while (++g_k < 4 )
			{
				if (board[g_i][g_j][g_k] == 'x')
					g_toplam = g_toplam + (g_k + 1);
			}
		}
		if (g_toplam != 10)
			return (0);
	}
	return (1);
}
