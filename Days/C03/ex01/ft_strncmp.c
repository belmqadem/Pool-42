/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:50:29 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/27 15:15:57 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n < 1)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main()
{
	char	s[] = "anarchy";
	char	n[] = "anarshy";

	printf("%d", ft_strncmp(s, n, 5));
}
*/
