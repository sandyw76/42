/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_sqrt.c                                                                */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/29 12:05:49 by swandelle                                */
/*   Updated: 2014/09/29 12:05:49 by swandelle                                */
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

int     ft_is_prime(int nb)
{
    int i;
    
    i=2;
    if(nb <= 1)
        return (0);
    while(i < nb)
    {
        if(nb % i ==0)
            return (0);
        i++;
    }
    return (1);
}
int     main (void)
{
  ft_putnbr(ft_is_prime(24));
    
    return (0);
}