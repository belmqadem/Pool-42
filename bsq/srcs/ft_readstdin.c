/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:04:23 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/10/04 21:04:29 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	stdin_solveMap(void)
{
	char	c;
	char	*buff;
	t_map	map;

	buff = 0;
	while (read(0, &c, 1))
		buffer_pusher(&buff, c);
	if (buff == 0)
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	map = iget_map(buff);
	free(buff);
	if (map.tab == 0)
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	getMaxSubSquare(map.tab, map.n, map.m);
	printGrid(map);
}
