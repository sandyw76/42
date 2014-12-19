/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlowcase.c                                                              */
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
void    ft_putstr(char *str)
{
    while (*str != '\0' )
    {
        ft_putchar(*str);
        str++;
    }
}

char    *ft_strlowcase (char *str)
{
    int i;
    
    i=0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i]+32;
        i++;
    }
    return (str);
}
int     main(void)
{
    char str[] = "AZERTY";
    ft_putstr(ft_strlowcase(str));
    return (0);
}
