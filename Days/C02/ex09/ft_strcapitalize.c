#include <stdio.h>

int	not_char(char str)
{
	if (str <= 47)
		return 1;
	if (str >= 58 && str <= 64)
		return 1;
	if (str >= 91 && str <= 96)
		return 1;
	if (str >= 123 && str <= 126)
		return 1;
	return 0;
}

char	*ft_strcapitalize(char *str) 
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i]) 
	{
		if (not_char(str[i - 1]) == 1 && (str[i] >= 'a' && str[i] <= 'z')) 
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "SaLut,     commEnt tu vas ? 42mots qi_uarante-deux; cinquante+et+un";
	ft_strcapitalize(s);
	printf("%s", s);
}
*/
