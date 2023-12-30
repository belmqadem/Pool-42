/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:07:31 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/16 23:44:57 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			write (1, " ", 1);
			ft_putchar((y / 10) + '0');
			ft_putchar((y % 10) + '0');
			if (x != 98)
			{
				write (1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
