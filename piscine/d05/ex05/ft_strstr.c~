#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
  int i;
  int a;

  a = 0;
  i = 0;
  while (str[i] != '\0')
    {
      while (str[i] == to_find[a])
	{
	  a++;
	  i++;
	}
      if (to_find[a] == '\0')
	return(&str[i - a]);
      a = 0;
      i++;
    }
  return (str);
}

int	main(void)
{
  char str[] = "mitä kuuluu moi";
  char to_find[] = "kuuluu";

  printf("%s", ft_strstr(str, to_find));
  return (0);
}
