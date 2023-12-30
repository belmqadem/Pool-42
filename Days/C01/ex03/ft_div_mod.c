/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:56:32 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/26 18:31:50 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main()
{
	int x = 48;
	int y = 5;
	int *px = &x;
	int *py = &y;
	ft_div_mod(x, y, px, py);
	printf("result 1 is %d & result 2 is %d\n", *px, *py);
}
*/
