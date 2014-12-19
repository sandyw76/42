/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strrev.c                                                              */
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

int     ft_strlen(char *str)
{
    int i;
    
    i = 1;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return (i);
}

void    ft_swap(int *a, int *b)
{
    int swap;
    
     swap = *a;
    *a = *b;
    *b = swap;
   
}
char	*ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;
    
    i = -1;
    len = ft_strlen(str);
    
    while(i!=len)
    {
        i++;
        len--;
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }
    return (str);
}

int     main(void)
{
   
    ft_putstr(ft_strrev("ab"));
    return (0);
}


