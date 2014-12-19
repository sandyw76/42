/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strstr.c                                                              */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/10/06 14:03:49 by swandelle                                */
/*   Updated: 2014/10/06 14:03:49 by swandelle                                */
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

char    *ft_strstr(char *str,char *to_find)
{
    int i;
    int j;
    
    i=0;
    j=0;
    while (str[i] != '\0' && to_find[j] != '\0')
    {
        if(str[i]==to_find[j])
        {
            j++;
        }
        else{
            j=0;
        }
        i++;
    }
    return ((char *)&str[i-j]);
}

char	*ft_strstr2(char *str, char *to_find)
{
	int i;
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
		{
			j++;
		}
		if (!to_find[j])
		{
			return ((char*)&str[i]);
		}
		i++;
	}
	return (0);
}

int     main(void)
{
    char str[]="mlkjhgfdsqazertyuiop";
    char to_find[]="azerty";
    ft_putstr(ft_strstr(str,to_find));
    ft_putchar('\n');
    
    
    return (0);
}
