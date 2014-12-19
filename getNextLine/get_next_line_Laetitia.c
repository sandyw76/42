#include "get_next_line.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int	ft_position_bis(char **save, char **line, int i)
{
	int ret;
	char *tic;
	char *tac;

	ret = 0;
	while ((*save)[i] != '\n' && (*save)[i])
		i++;
	if ((*save)[i] == '\n')
		ret = 1;
	i++;
	if (!*line)
		*line = ft_strsub(*save, 0, i - 1);
	else
	{
		tic = ft_strsub(*save, 0, i - 1);
		*line = ft_strcat(*line, tic);
	}
	if ((*save)[i] == '\0')
		tac = NULL;
	else
		tac = ft_strsub(*save, i, (ft_strlen(*save) - i));
	free (*save);
	*save = tac;
	return (ret);
}
char	*ft_realloc(char **save)
{
	char *tmp;

	tmp = *save;
	if (!(*save = ft_strnew(ft_strlen(tmp) + (BUF_SIZE + 1))))
		return (NULL);
	ft_strcpy(*save, tmp);
	free (tmp);
	return (*save);
}
int	ft_position(char **save, char **line)
{
	int i;
	char *tac;
	int ret;
	
	i = 0;
	ret = 0;
	if ((*save)[i] == '\n')
	{
		if (*line == NULL)
			*line = ft_strsub(*save, 0, i);
		ret = 1;
		i++;
		if ((*save)[i] == '\0')
			tac = NULL;
		else
			tac = ft_strsub(*save, i, (ft_strlen(*save) - i));
		free (*save);
		*save = tac;
		i = 0;
	}
	else
		ret = ft_position_bis(save, line, i);
	return (ret);
}
int	ft_read(char *buf, char **save, int const fd, char **line)
{
	int	ret;

	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
    {
        buf[ret] = '\0';
        if (*save == NULL)
        {
            free (*save);
            if (!(*save = ft_strnew(BUF_SIZE + 1)))
                return (-1);
        }
        if (!(*save = ft_realloc(save)))
            return (-1);
        ft_strncat(*save, buf, ret);
        if (ft_position(save, line) == 1)
            return (1);
    }
	free(buf);
	return (ft_position(save, line));
}
int get_next_line(int const fd, char **line)
{
	char	*buf;
	static char *save = NULL;

	*line = NULL;
	buf = ft_strnew(BUF_SIZE + 1);
	if ((BUF_SIZE <= 0) || (fd < 0))
		return (-1);
	if (save == NULL)
	{
		if (!(save = ft_strnew(BUF_SIZE + 1)))
			return (-1);
	}
	return(ft_read(buf, &save, fd, line));
}
int main(int argc, char **argv)
{
	int fd;
	char *line = NULL;

	if (argc == 1)
	{
		ft_putstr("File name missing.");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
		free(line);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close error");
		return (1);
	}
	return (0);
}
