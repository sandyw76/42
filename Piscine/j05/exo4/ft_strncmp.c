/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strncmp.c                                                              */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/10/06 14:03:49 by swandelle                                */
/*   Updated: 2014/10/06 14:03:49 by swandelle                                */
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

int	ft_strncmp(char *s1, char *s2,unsigned int n)
{
	unsigned int index;

	index = 0;
	while ((index < n) && (s1[index] != '\0') &&  (s1[index] == s2[index]))
	{
		index++;
	}
	return (s2[index] - s1[index]);
}

int     main(void)
{
    char s1[] = "BDDFE";
    char s2[] = "BCDFE";
    ft_putnbr(ft_strncmp(s2,s1,2));
    
    return (0);
}
