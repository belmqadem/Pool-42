/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:16:17 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/10/04 04:53:30 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	if (base[i] == '\0')
		return (0);
	else
		return (-1);
}

int	get_int_from_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	s;
	int	base_div;

	i = 0;
	r = 0;
	s = 1;
	base_div = ft_strlen(base);
	while (str[i] && (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && is_in_base(str[i], base))
	{
		r *= base_div;
		r += get_int_from_base(str[i], base);
		i++;
	}
	return (r * s);
}
/*
int main()
{
	printf("%d\n", ft_atoi_base("		----425", "01234567"));
}
*/
