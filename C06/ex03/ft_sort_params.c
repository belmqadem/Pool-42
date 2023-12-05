/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:35:24 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/30 17:49:28 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 1;
			while (j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					ft_swap(&argv[j], &argv[j + 1]);
				j++;
			}
			argc--;
		}
		j = 1;
		while (argv[j])
		{
			ft_putstr(argv[j]);
			j++;
		}
	}
	return (0);
}
