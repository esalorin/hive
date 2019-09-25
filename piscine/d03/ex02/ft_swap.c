#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
  printf("%d, %d", *a, *b);
}

int	main(void)
{
  int first;
  int second;
  int *a;
  int *b;

  first = 10;
  second = 3;
  ft_swap(&first, &second);
  return (0);
}
