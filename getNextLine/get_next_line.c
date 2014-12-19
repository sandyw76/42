#include "get_next_line.h"
//#include "libft.h" a remettre
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>/*a supprimer*/

/*
int     search_back_slash_n(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

int get_next_line(int const fd, char **line)
{
    char buf [BUF_SIZE + 1];
    int ret;
    //char *res;

    //*line = NULL;
    if (fd < 0 || BUF_SIZE <= 0)
        return (-1);

    while(search_back_slash_n(buf)==0)
    {
        ret = read(fd, buf, BUF_SIZE);
        if(ret==-1)
            return(0);
        *line = malloc(BUF_SIZE);
        strcpy(*line,buf);/*pensez  remettre ft_*/
/*        line++;
    }
    if(search_back_slash_n(buf)==1)
 {
        strcpy(*line,buf);/*pensez  remettre ft_*/
/*        line++;
    }
    *line= "\0";
    return(1);
}

int main(void)
{
    char *buff;

    int j;
    buff = malloc(3);
    j = open("./test.txt",O_RDONLY);

    char *line;
    get_next_line(j,(char **)&line);
    printf("line :%s ",line);
    close(j);
    return (0);
}*/

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

int     search_back_slash_n(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            return (1);
        }
        i++;
    }
    return (0);
}
/*Ajoue un cacactère à la fin de str*/
char *add_char(char *str,char c)
{
    int len;
    int i;
    char *res;
    
    res = malloc(strlen(str)+2);
    len = strlen(str)+2;
    i = 0;
    while(i<len-2)
    {
        res[i]=str[i];
        i++;
    }
    res[i++]=c;
    res[i++]='\0';
    return (res);
}

int		get_next_line(int const fd, char **line)
{
	 static char		buf[BUF_SIZE + 1];
	int				ret;
	char *tmp;
	int i;
	
	tmp = malloc(BUF_SIZE+1);
	i=0;
    if (fd < 0 || BUF_SIZE <= 0)
        return (-1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
	   	if (search_back_slash_n(buf)==1)
	    	{
	    	  while(buf[i]!='\n')
	    	  {
	    	     tmp=add_char(tmp,buf[i]);
	    	   //  BUF_SIZE = BUF_SIZE-i-1;
	    	       i++;
	    	  }
	    	  *line=tmp;
			    return (1);
	    	}
	    	strcat(tmp,buf);
		buf[ret] = 0;
		*line=tmp;
	}
	return (0);
}
int main(void)
{
    char *buff;
    int i;

    int j;
    buff = malloc(3);
    j = open("./test.txt",O_RDONLY);

    char *line;
    i = get_next_line(j,(char **)&line);
    printf("line 1 :  %s\n",line);
   // printf("i :%d\n",i);
   // printf("line %s\n",line);
    
  //  char *tmp = "TEST";
 //  printf("add char : %s",add_char(tmp,'Q'));
 /*while(fgetc(j)!=EOF)
 {
     get_next_line(j,(char **)&line);
   printf("line %s\n",line);
 }*/
 get_next_line(j,(char **)&line);
 printf("line 2 : %s\n",line);
 get_next_line(j,(char **)&line);
 printf("line 3 : %s\n",line);
 close(j);
    return (0);
}
