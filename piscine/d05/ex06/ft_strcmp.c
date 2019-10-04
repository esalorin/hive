#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
  int i;
  int a;

  i = 0;
  while (s1[i] == s2[i])
    {
      if (s1[i] == '\0' && s2[i] == '\0')
	return (0);
      i++;
    }
  a = s1[i] - s2[i];
  return (a);
}

int	main(void)
{
  char s1[] = "1234";
  char s2[] = "1555";

  printf("%d", ft_strcmp(s1, s2));
  return (0);
}
