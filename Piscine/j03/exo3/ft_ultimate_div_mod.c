/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_div_ultimate_div_mod.c                                                */
/*                                                                            */
/*   By: swandelle                                                            */
/*                                                                            */
/*   Created: 2014/09/10 16:10:49 by swandelle                                */
/*   Updated: 2014/09/10 19:07:58 by swandelle                                */
/*                                                                            */
/* ************************************************************************** */

/*************************/
/* a pointer to int      */
/* a contains adress     */
/* *a is int             */
/* &a adress of a        */
/*************************/
void ft_ultimate_div_mod(int *a, int*b)
{
   int d;
   int r;
   
   d = *a / *b;
   r = *a % *b;
   
   *a = d;
   *b = r;
}