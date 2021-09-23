void	cik_disari(char board[4][4][4]);
void	cik_disari_2(char board[4][4][4]);
void	gez(char board[4][4][4]);
void	gez_2(char board[4][4][4]);
void	gez_3(char board[4][4][4]);
void	bul(char board[4][4][4], int kap);

void	gerisini_sil(char board[4][4][4])
{
	bul (board, 0);
	bul (board, 1);
	bul (board, 2);
	gez (board);
}

void	gez_yerlestir_gerisini_sil(char board[4][4][4])
{
	gez_2 (board);
	gez_3 (board);
	gerisini_sil (board);
}

void	farkli_olasiligi_bul_yerlestir_sil(char board[4][4][4])
{
	cik_disari (board);
	gerisini_sil (board);
	cik_disari_2 (board);
	gerisini_sil (board);
}
//H.O.Ş.
