/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_fibonacci.c                                                           */
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

int     ft_fibonacci(int index)
{
    if( index <= 0)
    	return 0;
    if (index == 1 || index ==2 )
    	return 1;
    return ft_fibonacci(index-1) + ft_fibonacci(index-2);
}


int     main (void)
{
  ft_putnbr(ft_fibonacci(11));
    
    return (0);
}