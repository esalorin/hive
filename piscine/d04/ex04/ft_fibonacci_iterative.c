#include <stdio.h>

int	ft_fibonacci(int index)
{
  int a;
  int b;
 
  a = 0;
  b = 1;
  if (index < 0)
    return (-1);
  while (index > 1)
    {
      a = a + b;
      b = a + b;
      index = index - 2;
    }
  if (index % 2 == 0)
    return (a);
  else
    return (b);
}

int	main(void)
{
  int a;

  a = ft_fibonacci(8);
  printf("%d", a);
  return (0);
}
