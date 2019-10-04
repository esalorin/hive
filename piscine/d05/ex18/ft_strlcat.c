#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  unsigned int a;

  i = 0;
  a = 0;
  while (dest[i] != '\0')
      i++;
  while (size > a && src[a] != '\0')
    {
      dest[i] = src[a];
      i++;
      a++;
    }
  return (i);
}

int	main(void)
{
  char dest[] = "hello";
  char src[] = "moro";
  unsigned int size = 0;

  printf("%d", ft_strlcat(dest, src, size));
  return (0);
}
