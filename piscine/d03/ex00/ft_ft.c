#include <stdio.h>

void	ft_ft(int *nbr)
{
  *nbr = 42;
}

int	main(void)
{
  int a;
  int *nbr;

  nbr = &a;
  ft_ft(nbr);
  printf("%d", a);
  return (0);
}
