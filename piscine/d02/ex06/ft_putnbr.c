#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
  if (nb < 0)
    {
      ft_putchar('-');
      if (nb == -2147483648)
	{
	  ft_putchar('2');
	  ft_putnbr(147483648);
	}
      nb = -nb;
    }
  if (nb > 9)
    ft_putnbr(nb / 10);
  ft_putchar((nb % 10) + '0');
}

int	main(void)
{
  ft_putnbr(-12345);
  return (0);
}
