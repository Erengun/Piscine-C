void	ucun_ucunu_sil(char dizi[16], char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 16)
	{
		k = i % 4;
		if (dizi[i] == '3' && i / 4 == 0)
			board[0][k][2] = '-' ;
		else if (dizi[i] == '3' && i / 4 == 1)
			board[3][k][2] = '-' ;
		else if (dizi[i] == '3' && i / 4 == 2)
			board[k][0][2] = '-' ;
		else if (dizi[i] == '3' )
			board[k][3][2] = '-' ;
		i++;
	}
}
