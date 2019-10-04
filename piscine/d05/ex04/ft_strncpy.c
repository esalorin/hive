#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}

int	main(void)
{
  char src[] = "moikka";
  char dest[10000];
  unsigned int n = 30;

  printf("%s", ft_strncpy(dest, src, n));
  return (0);
}
