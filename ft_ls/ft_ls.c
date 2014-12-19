#include "./../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>

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
    struct stat *info;
    DIR *rep;
    rep = opendir(REP);
    list=NULL;
    lecture = readdir(rep);lecture = readdir(rep);
    while ((lecture = readdir(rep)))
    {
        //addElement(list,lecture->d_name);
        //list->content=lecture;
        //list = list->next;
        info = malloc(sizeof(stat));
        stat(lecture->d_name,info);
        printf("%lo\n",(long unsigned int)info->st_mode);
        printf("Dernière modification du fichier:  %s", ctime(&info->st_mtime));
        ft_putstr(lecture->d_name);
        ft_putchar(' ');
        free(info);
         
    }
    ft_putchar('\n');
    closedir(rep);
    return (list);
}


int main()
{
  ft_ls();
    
    /*  sssss   while(l->valeur!=NULL)
    {
        ft_putstr(l->valeur);
        l = l->prec;
    }*/
    
    return (0);
}
