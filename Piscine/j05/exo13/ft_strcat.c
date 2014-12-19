/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlowcase.c                                                          */
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

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i=0;
    j=0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    ft_putstr(dest);
    return (dest);
}

int     main(void)
{
   char src[]="test";
   char dest[]="azerty\0\0\0\0\0\0\0\0\0\0";
   ft_strcat(dest,src);
       return (0);
}
