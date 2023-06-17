#define ROWS		4
#define COLS		4

#include <unistd.h>

int board[ROWS][COLS];

void	ft_board_creat(int board[ROWS][COLS])
{
	int	row;
	int	col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

