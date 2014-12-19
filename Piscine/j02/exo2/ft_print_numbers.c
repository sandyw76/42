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
void    ft_print_numbers(void);


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char numbers;
    
    numbers = '0';
    while(numbers <= '9')
    {
        ft_putchar(numbers);
        numbers++;
    }
}

int main (void)
{
    ft_print_numbers();
    return (0);
}