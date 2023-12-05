/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:02:52 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/10/04 21:02:59 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct s_chars {
	char	empty;
	char	obstacle;
	char	full;
}	t_chars;

typedef struct s_map
{
	int		**tab;
	int		n;
	int		m;
	t_chars	chars;
}	t_map;

typedef struct s_square
{
	int	x;
	int	y;
	int	size;
}	t_square;

t_map	iget_map(char *buff);


void ft_putstr(char *s, int fd);
int ft_strlen(char *s);
void getMaxSubSquare(int** M, int R, int C);
void	buffer_pusher(char **buffer, char c);
void	printGrid(t_map mp);
void	stdin_solveMap(void);
void	set_nm(int **N, int **M, int m, int n);
void	inc(int *i, int *j);
void	set_mj(char *buff, int *m, int *j, int i);
void	set_ijk(int *i, int *j, int *k, int I);
void	inc_and_set(int *i, int *j, int *k);

#endif
