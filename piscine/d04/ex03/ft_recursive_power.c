#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
  int tulos;

  tulos = 1;
  if (power < 0)
    return (0);
  if (power > 0)
    {
    tulos = nb * ft_recursive_power(nb, power - 1);
    }
  return (tulos);
}

int	main(void)
{
  int a;

  a = ft_recursive_power(2, 3);
  printf("%d", a);
  return (0);
}
