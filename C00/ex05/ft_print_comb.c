/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:51:30 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/16 23:45:16 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char a, char b)
{
	write (1, &c, 1);
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				ft_putchar(num1, num2, num3);
				if (num1 != 55)
				{
					write (1, ", ", 2);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
