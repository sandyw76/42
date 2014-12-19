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
int     ft_str_is_printable(char *str)
{
    int i;
    int result;
    i = 0;
    
    result=0;
    while (str[i]!='\0')
    {
        if(str[i]>=' ' && str[i]<='~')
            result=1;
        else
            return 0;
        i++;
    }
    return result;
}

int     main(void)
{
    char str[] = "azertyZ\r";
    ft_putnbr(ft_str_is_printable(str));
       return (0);
}
