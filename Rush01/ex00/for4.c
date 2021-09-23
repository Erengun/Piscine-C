#include <stdio.h>

void	bul(char board[4][4][4], int kap);

void	for4_3(char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 4)
	{
		k = 0;
		while (k < 4)
		{
			if (board[i][k][3] == '0')
				board[i][k][3] = 'x';
			k++;
		}
		i++;
	}
}

void	for4_2(char dizi[16], char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 16)
	{
		k = i % 4;
		if (dizi[i] == '3' && i / 4 == 0 && dizi[i + 4] == '2' )
			board[2][k][3] = 'x' ;
		else if (dizi[i] == '3' && i / 4 == 1 && dizi[i - 4] == '2' )
			board[1][k][3] = 'x' ;
		else if (dizi[i] == '3' && i / 4 == 2 && dizi[i + 4] == '2' )
			board[k][2][3] = 'x' ;
		else if (dizi[i] == '3' && dizi[i - 4] == '2' && i / 4 == 3)
			board[k][1][3] = 'x' ;
		i++;
	}
	bul(board, 3);
	for4_3(board);
}

void	for4(char dizi[16], char board[4][4][4])
{
	int	i;
	int	k;

	i = 0;
	while (i < 16)
	{
		k = i % 4;
		if (dizi[i] == '1' && i / 4 == 0)
			board[0][k][3] = 'x' ;
		else if (dizi[i] == '1' && i / 4 == 1)
			board[3][k][3] = 'x' ;
		else if (dizi[i] == '1' && i / 4 == 2)
			board[k][0][3] = 'x' ;
		else if (dizi[i] == '1' && i / 4 == 3)
			board[k][3][3] = 'x' ;
		i++;
	}
	for4_2(dizi, board);
}
// H.O.Ş.
