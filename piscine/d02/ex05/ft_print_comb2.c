#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_comb2(void)
{
  int a;
  int b;
  int c;
  int d;

  a = 0;
  while (a < 10)
    {
      b = 0;
      c = a;
      d = b + 1;
      while (b < 10)
	{
	  while (c < 10)
	    {
	      while (d < 10)
		{
		  ft_putchar(a + 48);
		  ft_putchar(b + 48);
		  ft_putchar(' ');
		  ft_putchar(c + 48);
		  ft_putchar(d + 48);
		  if (a == 9 && b == 8 && c == 9 && d == 9)
		    return ;
		  ft_putchar(',');
		  ft_putchar(' ');
		  d++;
		}
	      c++;
	      d = 0;
	    }
	  b++;
	  c = a;
	  d = b + 1;
	}
      a++;
    }
}

int	main(void)
{
  ft_print_comb2();
  return (0);
}
