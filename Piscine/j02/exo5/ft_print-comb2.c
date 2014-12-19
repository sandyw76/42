/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_print_comb2.c                                                         */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/10 16:10:49 by swandelle                                */
/*   Updated: 2014/09/10 19:07:58 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print(int nb1, int nb2, int nb3, int nb4)
{
   while(nb3++ < 57)
   {
        while(nb4++ < 57)
        {
            ft_putchar(nb1);
            ft_putchar(nb2);
            ft_putchar(' ');
            ft_putchar(nb3); 
            ft_putchar(nb4);
            if(!(nb1==56 && nb4 ==57 && nb2==57 && nb3==57))
                ft_putchar(',');
        }
        nb4=nb3;
   }
}

void    ft_print_comb2(void)
{
    int chiffre1;
    int chiffre2; 
    int chiffre3; 
    int chiffre4;
    
    chiffre1 = 47;
    chiffre2 = 47;
    chiffre3 = 47;
    chiffre4 = 48;
    while (chiffre1++ < 56)
    {
        while (chiffre2++ < 57)
        {
            ft_print(chiffre1, chiffre2, chiffre3, chiffre4);
            chiffre3=chiffre2;
        }
        chiffre2 = chiffre1;
        chiffre3 = chiffre2;
        chiffre4 = chiffre3;
    }
}

int     main(void)
{
    ft_print_comb2();
    return(0);
}