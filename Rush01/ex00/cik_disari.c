#include <unistd.h>

void	bul(char board[4][4][4], int kap);
void	stampa(char board[4][4][4]);

int	g_i;
int	g_k;
int	g_j;
int	g_m;
int	g_n;

void	cik_disari(char board[4][4][4])
{
	g_i = -1;
	while (g_i++ < 3)
	{
		g_k = -1;
		while (g_k++ < 3)
		{
			g_j = -1;
			g_m = 0;
			g_n = -1;
			while (g_j++ < 3)
			{
				if (board[g_i][g_j][g_k] == '0')
				{
					g_m ++;
					g_n = g_k;
				}
			}
			if (g_m == 1 && board[g_i][g_n][g_k] != '-' && g_n != -1)
				board[g_i][g_n][g_k] = 'x';
		}
	}
}

void	cik_disari_2(char board[4][4][4])
{
	g_i = -1;
	while (g_i++ < 3)
	{
		g_k = -1;
		while (g_k++ < 3)
		{
			g_j = -1;
			g_m = 0;
			g_n = -1;
			while (g_j++ < 3)
			{
				if (board[g_j][g_k][g_i] == '0')
				{
					g_m ++;
					g_n = g_j;
				}
			}
			if (g_m == 1 && g_n != -1)
				board[g_n][g_k][g_i] = 'x';
		}
	}
}
