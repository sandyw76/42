/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_iterative_power.c                                                     */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/24 14:36:49 by swandelle                                */
/*   Updated: 2014/09/24 14:36:49 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int     ft_iterative_power ( int nb, int power)
{
    int i;
    int result;
    
    result=1;
    i=1;
    
    if (power < 0)
        return (0);
    if (power ==0)
        return (1);
    if (power ==1)
        return nb;
    else
    {
      while(i++ <= power)  
      {
          result = result*nb;
      }
      return result;
    }
}

int     main (void)
{
    ft_putnbr(ft_iterative_power(2,-9));
    ft_putchar('\n');
    ft_putnbr(ft_iterative_power(2,0));
    ft_putchar('\n');
    ft_putnbr(ft_iterative_power(2,1));
    ft_putchar('\n');
    ft_putnbr(ft_iterative_power(2,3));
    ft_putchar('\n');
    
    return (0);
}