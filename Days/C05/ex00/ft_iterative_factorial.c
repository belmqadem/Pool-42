/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:58:04 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/30 16:49:10 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (r);
}
/*
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/
