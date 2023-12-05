/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:16:35 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/26 17:12:28 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main()
{
	int x = 42;
	int y = 4;

	int *px = &x;
	int *py = &y;

	ft_ultimate_div_mod(px, py);
	printf("result 1 is %d, result 2 is %d\n", *px, *py);
} */
