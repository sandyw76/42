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
void    ft_print_alphabet(void);


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    lettre;
    
    lettre = 'a';
    while(lettre <= 'z')
    {
        ft_putchar(lettre);
        lettre++;
    }
}

int    main(void)
{
    ft_print_alphabet();
    return(0);
}
