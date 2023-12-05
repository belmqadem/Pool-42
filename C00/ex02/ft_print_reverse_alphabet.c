/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:01:01 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/13 18:09:44 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralpha;

	ralpha = 'z';
	while (ralpha >= 'a')
	{
		write (1, &ralpha, 1);
		ralpha--;
	}
}
