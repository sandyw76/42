/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_print_alphabet.c                                                      */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/08 16:10:49 by swandelle                                */
/*   Updated: 2014/09/08 19:07:58 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int nb1;
    int nb2;
    int nb3;
    
    nb1 = 47;
    nb2 = 48;
    nb3 = 49;
    while (nb1++ < 58)
    {
        while (nb2++ < 58)
        {
            while (nb3++ < 57)
            {
                ft_putchar(nb1);
                ft_putchar(nb2);
                ft_putchar(nb3);
                ft_putchar(32);
            }
            nb3 = nb2+1;
        }
        nb2 = nb1+1;
        nb3 = nb2+1;
    }
}

int     main (void)
{
   ft_print_comb();
    return(0);
}