#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return 0;
		str++;
	}
	return 1;
}
/*
int	main()
{
	printf("%d", ft_str_is_numeric("13+37"));
}
*/
