/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:47:55 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/26 17:28:40 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;
	ft_rev_int_tab(arr, size);
    while (i < size)
    {
        printf("%d ", arr[i]);
		i++;
    }
}
*/
