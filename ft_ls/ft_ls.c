#include "./../libft/libft.h"
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

#define REP "."

 typedef struct s_list
        {
                void *valeur;
                struct s_list *prec;
        } t_list ;

void addElement(t_list *p, char *val)
{
        t_list *element = malloc(sizeof(t_list));
        if(!element) exit(EXIT_FAILURE);     /* Si l'allocation a échouée. */
        element->valeur = val;
       // ft_putstr(val);
        element->prec = p;
        p = element;       /* Le pointeur pointe sur le dernier élément. */
}
t_list *ft_ls(void)
{
    t_list *list;
    struct dirent *lecture;
    DIR *rep;
    rep = opendir(REP);
    list=NULL;
    while ((lecture = readdir(rep)))
    {
        //addElement(list,lecture->d_name);
        //list->content=lecture;
        //list = list->next;
        ft_putstr(lecture->d_name);
        ft_putchar(' ');
    }
    ft_putchar('\n');
    closedir(rep);
    return (list);
}


int main()
{
  ft_ls();
    
    /*while(l->valeur!=NULL)
    {
        ft_putstr(l->valeur);
        l = l->prec;
    }*/
    
    return (0);
}
