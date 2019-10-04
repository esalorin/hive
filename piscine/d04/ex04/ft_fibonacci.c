#include <stdio.h>

int	ft_fibonacci(int index)
{
  if (index < 0)
    return (-1);
  else if (index == 1)
    return (1);
  else if (index == 0)
    return (0);
  else
    return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

int	main(void)
{
  int a = -1;

  while (a < 9)
    {
      printf("%d\n", ft_fibonacci(a));
      a++;
    }
  return (0);
}
