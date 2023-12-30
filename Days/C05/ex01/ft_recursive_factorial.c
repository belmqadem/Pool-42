/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:36:46 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/30 16:49:36 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	if (nb > 0)
	{
		r = nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (r);
}
/*
int main()
{
	printf("%d\n", ft_recursive_factorial(5));
}
*/
