/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:29:23 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/26 17:33:11 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{	
				ft_swap(&tab[i + 1], &tab[i]);
			}
			i++;
		}
		size--;
	}
}
/*
int main()
{	int i = 0;
	int nums[] = {4, 87, 0, 9, 1};
	ft_sort_int_tab(nums, 5);
	while(i < 5)
	{
		printf("%d\n", nums[i]);
		i++;
	}
	return 0;
}
*/
