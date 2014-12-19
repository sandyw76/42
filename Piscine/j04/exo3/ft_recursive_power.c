/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_recursive_power.c                                                     */
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

int     ft_recursive_power ( int nb, int power)
{
    if (power < 0)
        return (0);
    if (power ==0)
        return (1);
    if (power ==1)
        return nb;
    return nb*ft_recursive_power(nb,power-1);
}

int     main (void)
{
    ft_putnbr(ft_recursive_power(2,-9));
    ft_putchar('\n');
    ft_putnbr(ft_recursive_power(2,0));
    ft_putchar('\n');
    ft_putnbr(ft_recursive_power(2,1));
    ft_putchar('\n');
    ft_putnbr(ft_recursive_power(2,6));
    ft_putchar('\n');
    
    return (0);
}