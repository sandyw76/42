/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_atoi.c                                                                */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/16 10:08:49 by swandelle                                */
/*   Updated: 2014/09/16 10:08:49 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int     ft_atoid(char *str)
{
    int i;
    int result;
    int *prt;
    
    prt = &result;
    i = 0;
    result = 0;
    printf("%d\n",*prt);
   while (str[i] != '\0')
    {
        printf("dans le while valeur de i : %d\n",i);
        if (str[i] >= '0' && str[i] <= '9')
        {
            printf("dans le if valeur de i : %d\n",i);
           prt[i] = str[i]-48;/*quand l'instruction passe la 2e fois incrément i bizzare*/
           printf("i=%d\n",i);
           printf("str[%d]=%c\n",i,str[i]);
           printf("prt[%d]=%d\n",i,prt[i]);
            
           // result = *prt;
         
            printf("\n\n");
        }
        else{
            result = 0;
            break;
        }
        printf("i avant incrément:%d\n",i);
        i++;
    }
    return (result);
}

int     main(void)
{
  ft_atoid("12");
    return (0);
}