/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:56:49 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/29 20:50:19 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;
	int		error;

	error = checkerror(base);
	len = ft_strlen(base);
	n = nbr;
	if (error == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < len)
			ft_putchar(base[n]);
		if (n >= len)
		{
			ft_putnbr_base(n / len, base);
			ft_putnbr_base(n % len, base);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(  894867, "0123456789");
	printf("\n");
	ft_putnbr_base(-53, "0123456789abcdef");
}
*/
