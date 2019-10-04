#include <stdio.h>

int	ft_queens(int **array, int i, int j)
{
  int x;

  x = 1;
  while (x <= i + 1 || x <= j + 1)
    {
      if (array[i - x][j - x] == 1 || array[i][j - x] == 1 || array[i + x][j - x] == 1)
	ft_queens(array, i + 1, j);
      x++;
    }
  array[i][j] = 1;
  ft_queens(array, i - i, j + 1);
}

int	ft_eight_queens_puzzle(void)
{
  int i;
  int j;
  int array[4][4] = {0, 0, 0, 0};
  		    {0, 0, 0, 0};
		    {0, 0, 0, 0};
		    {0, 0, 0, 0};

  i = 0;
  j = 0;
  ft_queens(array, i ,j);
		    
  return ();
}

int	main(void)
{
  ft_eight_queens_puzzle();
  return (0);
}
