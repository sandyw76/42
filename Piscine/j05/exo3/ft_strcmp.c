/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strstr.c                                                              */
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

int     ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;
    int result;
    
    i = 0;
    j = 0;
    while (s1[i] != '\0' && s2[j] !='\0')
    {
        if (s1[i] == s2[j])
            result=0;
        else if (s1[i] < s2[j])
            return -1;
        else
            result=1;
        i++;
        j++;
        
    }
    return (result);
}

int	ft_strcmp2(char *s1, char *s2)
{
	int index;

	index = 0;
	while ((s1[index] != '\0') && (s1[index] == s2[index]))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

int     main(void)
{
    char s1[] = "A";
    char s2[] = "B";
    ft_putnbr(ft_strcmp(s2,s1));
    
    return (0);
}
