/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_sort_integer_table.c                                                  */
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
void    ft_swap(int *a, int *b)
{
    int swap;
    
    swap = *a;
    *a = *b;
    *b = swap;
   
}
void    ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
			i++;
	}
	i=0;
	while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(',');
        i++;
    }
     ft_putchar('\n');
}
int     main(void)
{
    
    int size;
    int i;
    int tab[10];
    size = 10;
    i=0;
    tab[0] = 9;
    tab[1] = 8;
    tab[2] = 7;
    tab[3] = 6;
    tab[4] = 5;
    tab[5] = 4;
    tab[6] = 3;
    tab[7] = 2;
    tab[8] = 1;
    while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(',');
        i++;
    }
     ft_putchar('\n');
    ft_sort_integer_table(tab,size);
    return (0);
}