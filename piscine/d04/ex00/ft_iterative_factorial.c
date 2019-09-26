#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
  int tulos;

  tulos = 1;
  if (nb < 0 || nb > 12)
    return (0);
  while (nb > 0)
    {
      tulos = tulos * nb;
      nb--;
    }
  return (tulos);
}

int	main(void)
{
  int a;

  a = ft_iterative_factorial(-1);
  printf("%d", a);
  return (0);
}
