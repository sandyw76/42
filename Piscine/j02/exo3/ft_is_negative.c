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

void    ft_putchar(char c);
void    ft_is_negative(int n);


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if(n < 0)
        ft_putchar('N');
    else
        ft_putchar('Y');
    ft_putchar('\n');
}

int     main(void)
{
    ft_is_negative(3);
    ft_is_negative(-2);
    ft_is_negative(0);
    return(0);
}