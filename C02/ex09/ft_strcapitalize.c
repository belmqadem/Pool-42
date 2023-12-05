/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:00:55 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/09/21 15:14:11 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	on_word;

	i = 0;
	on_word = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) || is_numeric(str[i]))
		{
			if (on_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (! on_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			on_word = 0;
		}
		else
			on_word = 1;
		i++;
	}
	return (str);
}
/*
int main()
{
	char strg[] = "salut, comment tu vAs ? 42mots quarante-deuX; cinQuante+et+un";
	ft_strcapitalize(strg);
	printf("%s\n", strg);
}
*/
