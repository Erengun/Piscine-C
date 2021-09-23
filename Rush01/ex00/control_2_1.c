void	bul(char board[4][4][4], int kap);
void	gez(char board[4][4][4]);

void	control_2_1(char dizi[16], char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 16)
	{
		k = i % 4;
		if (dizi[i] == '2' && i / 4 == 0 && dizi[i + 4] == '1')
			board[0][k][2] = 'x' ;
		else if (dizi[i] == '2' && i / 4 == 1 && dizi[i - 4] == '1')
			board[3][k][2] = 'x' ;
		else if (dizi[i] == '2' && i / 4 == 2 && dizi[i + 4] == '1')
			board[k][0][2] = 'x' ;
		else if ((dizi[i] == '2' && dizi[i - 4] == '1')
			&& (board[k][3][2] != '-' && i / 4 == 3))
			board[k][3][2] = 'x' ;
		bul(board, 2);
		gez (board);
		i++;
	}
}

void	yaz_4( char board[4][4][4], int yd, int j)
{
	int	f;

	f = -1;
	while (++f < 4 && yd == 0)
		board[f][j][f] = 'x';
	f = -1;
	while (++f < 4 && yd == 1)
		board[f][j][3 - f] = 'x';
	f = -1;
	while (++f < 4 && yd == 2)
		board[j][f][f] = 'x';
	f = -1;
	while (++f < 4 && yd == 3)
		board[j][f][3 - f] = 'x';
}

void	control_4_1(char dizi[16], char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 16)
	{
		k = i % 4;
		if (dizi[i] == '4' && i / 4 == 0)
			yaz_4(board, 0, k);
		else if (dizi[i] == '4' && i / 4 == 1 )
			yaz_4(board, 1, k);
		else if (dizi[i] == '4' && i / 4 == 2 )
			yaz_4(board, 2, k);
		else if (dizi[i] == '4' && i / 4 == 3 )
			yaz_4(board, 3, k);
		i++;
	}
	bul(board, 0);
	bul(board, 1);
	bul(board, 2);
	bul(board, 3);
	gez(board);
}
