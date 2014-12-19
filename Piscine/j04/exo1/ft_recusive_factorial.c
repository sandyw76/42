/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_recursive_factoriel.c                                                 */
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
int     ft_recursive_factorial ( int nb)
{
    if(nb < 0)
        return (0);
    if(nb == 1)
        return (1);
    return (nb*ft_recursive_factorial(nb-1));
}

int     main(void)
{
   /* ft_putnbr(ft_iterative_factoriel(0));
    ft_putchar('\n');
    ft_putnbr(ft_iterative_factoriel(1));
    ft_putchar('\n');
    ft_putnbr(ft_iterative_factoriel(2));
    ft_putchar('\n');
    ft_putnbr(ft_iterative_factoriel(3));
    ft_putchar('\n');*/
    ft_putnbr(ft_recursive_factorial(13));
    ft_putchar('\n');
    
    return (0);
}