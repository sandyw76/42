/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putnbr_base.c                                                         */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/10/06 15:36:49 by swandelle                                */
/*   Updated: 2014/10/06 15:36:49 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putchar (char c)
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

int     ft_strlen(char *str)
{
    int i;
    
    i = 1;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return (i);
}

void    ft_putstr(char *str)
{
    while (*str != '\0' )
    {
        ft_putchar(*str);
        str++;
    }
}



void	ft_putnbr_base(int nbr, char *base)
{
    
	    

}

int     main(void)
{
    char base[]="01";
    ft_putnbr_base(8,base);
    return (0);
}
