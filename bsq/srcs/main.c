/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:37 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/10/04 21:05:58 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*buffer_duplicate(char *buffer)
{
	char	*tmp; // buffer temporaire
	int		i;

	tmp = (char *) malloc(sizeof(char) * (2 + ft_strlen(buffer)));
	i = 0;
	while (buffer[i])
	{
		tmp[i] = buffer[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

void	buffer_pusher(char **buffer, char c)
{
	char	*tmp;
	int		i;

	if (*buffer == 0)
	{
		*buffer = (char *)malloc(sizeof(char) * 2);
		**buffer = c;
		*(*buffer + 1) = 0;
	}
	else
	{
		tmp = buffer_duplicate(*buffer);
		i = ft_strlen(tmp);
		tmp[i] = c;
		tmp[i + 1] = 0;
		free(*buffer);
		*buffer = tmp;
	}
}

void	printGrid(t_map mp)
{
	int	i;
	int	j;

	i = 0;
	while (i < mp.n)
	{
		j = 0;
		while (j < mp.m)
		{
			if (mp.tab[i][j] == 1)
				write(1, &mp.chars.empty, 1);
			else if (mp.tab[i][j] == 0)
				write(1, &mp.chars.obstacle, 1);
			else
				write(1, &mp.chars.full, 1);
			j++;
		}
		i++;
		ft_putstr("\n", 1);
	}
}

void	solveMap(char *path)
{
	char	c;
	char	*buff;
	t_map	map;
	int		fd;

	buff = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	if (read(fd, 0, 0) == -1)
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	while (read(fd, &c, 1) > 0)
		buffer_pusher(&buff, c);
	close(fd);

	if (buff == 0)
	{
		ft_putstr("map error\n", 2);
		return;
	}

	map = iget_map(buff);
	free(buff);
	if (map.tab == NULL)
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	getMaxSubSquare(map.tab, map.n, map.m);
	printGrid(map);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		stdin_solveMap();
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			solveMap(argv[i]);
			i++;
		}
	}
	return (0);
}
