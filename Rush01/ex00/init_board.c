#include <unistd.h>

void	for4(char dizi[16], char board[4][4][4]);
void	control_2_1(char dizi[16], char board[4][4][4]);
void	control_4_1(char dizi[16], char board[4][4][4]);
void	ucun_ucunu_sil(char dizi[16], char board[4][4][4]);
void	farkli_olasiligi_bul_yerlestir_sil(char board[4][4][4]);
void	son_bakis(char dizi[16], char board[4][4][4]);
void	son_bakis_2(char dizi[16], char board[4][4][4]);
void	son_bakis_3(char dizi[16], char board[4][4][4]);
void	gerisini_sil(char board[4][4][4]);
void	gez_yerlestir_gerisini_sil(char board[4][4][4]);
void	yazdir(char board[4][4][4]);
void	stampa_2(char board[4][4][4]);
int		final(char board[4][4][4]);

void	yol(char dizi[16], char board[4][4][4])
{
	int	i;

	for4 (dizi, board);
	control_2_1 (dizi, board);
	control_4_1(dizi, board);
	ucun_ucunu_sil(dizi, board);
	farkli_olasiligi_bul_yerlestir_sil(board);
	farkli_olasiligi_bul_yerlestir_sil(board);
	son_bakis(dizi, board);
	son_bakis_2(dizi, board);
	son_bakis_3(dizi, board);
	gerisini_sil(board);
	i = -1;
	while (++i < 4)
		gez_yerlestir_gerisini_sil(board);
	if (final(board) == 0)
		write(1, "No Solution\n", 12);
	else
		stampa_2(board);
}

void	initboard(char dizi[16])
{
	char	board[4][4][4];
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				board[i][j][k] = '0';
				k++;
			}
			j++;
		}
		i++;
	}
	yol(dizi, board);
}
//H.O.Ş.
