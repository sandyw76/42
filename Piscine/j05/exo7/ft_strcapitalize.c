/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlowcase.c                                                              */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/10/06 15:36:49 by swandelle                                */
/*   Updated: 2014/10/06 15:36:49 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putchar (char c)
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

char    *ft_capitalize(char *str)
{
    int i;
    int special;
    
    i=0;
    special=1;
    while (str[i] != '\0')
    {
       if(special==1 && str[i]>= 'a' && str[i]<='z')
       {
            str[i]=str[i]-32;
            special=0;
        }
        if (!(str[i] >='a' && str[i] <='z' && str[i])
                &&!(str[i] >='A' && str[i] <='Z' && str[i])
                &&!(str[i] >= '0' && str[i] <= '9'))
            special=1;
        i++;
    }
    ft_putstr(str);
    return (str);
}


int     main(void)
{
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_capitalize(str);
    ft_putchar('\n');
    ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
    return (0);
}
