/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strncpy.c                                                             */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/10/06 13:48:49 by swandelle                                */
/*   Updated: 2014/10/06 13:48:49 by swandelle                                */
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

char    *ft_strncpy(char *dest,char *src,unsigned int n)
{
    unsigned int i;
    
    i=0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i]='\0';
        i++;
    }
    ft_putstr(dest);
   return (dest);
}





int     main(void)
{
   char src[] ="test";
   char dest[]="azerty";
    ft_strncpy(dest,src,5);
    
    return (0);
}