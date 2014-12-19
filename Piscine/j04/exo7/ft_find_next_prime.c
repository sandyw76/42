/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_find_next_prime.c                                                     */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/29 12:32:49 by swandelle                                */
/*   Updated: 2014/09/29 12:32:49 by swandelle                                */
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

int     ft_find_next_prime(int nb)
{
    int i;
    
    i=nb+1;
    if(ft_is_prime(nb))
        return nb;
    
    while(!ft_is_prime(i))
    {
        i++;
    }
    return i;
}

int     main (void)
{
  ft_putnbr(ft_find_next_prime(31));
    
    return (0);
}