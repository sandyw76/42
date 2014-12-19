/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putnbr.c                                                              */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/10 16:10:49 by swandelle                                */
/*   Updated: 2014/09/10 19:07:58 by swandelle                                */
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

int     main(void)
{
    ft_putnbr(-10);
    ft_putnbr(25);
    ft_putnbr(5);
    return(0);
}