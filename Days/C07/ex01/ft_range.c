/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:24:09 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/10/04 22:09:40 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	n;
	int	*tab;

	j = 0;
	n = max - min;
	tab = (int *) malloc(n * sizeof(int));
	if (!tab)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		tab[j] = min;
		min++;
		j++;
	}
	return (tab);
}
/*
int main()
{
	int *arr = ft_range(2, 10);

	for (int i  = 0; i < 8; i++)
	{
		printf("%d\n", *(arr + i));
	}
}
*/
