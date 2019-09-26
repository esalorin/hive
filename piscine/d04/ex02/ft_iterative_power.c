#include <stdio.h>

int	ft_iterative_factorial(int nb, int power)
{
  int tulos;

  tulos = 1;
  if (power < 0)
    return (0);
  while (power > 0)
    {
      tulos = tulos * nb;
      power--;
    }
  return (tulos);
}

int	main(void)
{
  int a;

  a = ft_iterative_factorial(5, 3);
  printf("%d", a);
  return (0);
}
