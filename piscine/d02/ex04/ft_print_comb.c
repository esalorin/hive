#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_comb(void)
{
  int x;
  int y;
  int a;

  x = 0;
  y = 1;
  a = 2;
  while (x <= 7)
    {
      while (y < 9)
	{
	  while (a < 10)
	    {
	      ft_putchar(x + '0');
	      ft_putchar(y + '0');
	      ft_putchar(a + '0');
	      if (x == 7 && y == 8 && a == 9)
		return ;
	      ft_putchar(',');
	      ft_putchar(' ');
	      a++;
	    }
	  y++;
	  a = y + 1;
	}
      x++;
      y = x + 1;
      a = y + 1;
    }
}

int	main(void)
{
  ft_print_comb();
  return (0);
}
