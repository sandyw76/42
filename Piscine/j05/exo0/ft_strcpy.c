/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strcpy.c                                                              */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/24 14:36:49 by swandelle                                */
/*   Updated: 2014/09/24 14:36:49 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void    ft_putstr (char *str)
{
    while (*str != '\0' )
    {
        ft_putchar (*str);
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

char    *ft_strcpy (char *dest, char *src)
{
    int i;
    
    i=0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
    return (dest);
    
}


int     main(void)
{
   
   char src[] = "test";
   char dest[] = "aaaa";
  ft_putstr(ft_strcpy(dest,src));
    return (0);
}