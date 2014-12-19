/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putstr.c                                                              */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/10 16:10:49 by swandelle                                */
/*   Updated: 2014/09/10 19:07:58 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0' )
    {
        ft_putchar(*str);
        str++;
    }
}

int     main(void)
{
    ft_putstr("test");
    return(0);
}