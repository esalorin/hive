#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
  int tulos;

  tulos = 1;
  if (nb < 0 || nb > 12)
    return (0);
  if (nb > 0)
    {
      tulos = nb * ft_recursive_factorial(nb - 1);
    }
  return (tulos);
}

int	main(void)
{
  int a;

  a = ft_recursive_factorial(5);
  printf("%d", a);
  return (0);
}
