#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

int	main(void)
{
  char src[] = "moikka";
  char dest[1];

  printf("%s", ft_strcpy(dest, src));
  return (0);
}
