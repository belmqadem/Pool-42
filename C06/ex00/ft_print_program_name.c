/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:39:27 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/30 17:42:22 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
		{
			write (1, &argv[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
}
