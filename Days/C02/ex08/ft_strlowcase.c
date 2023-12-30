#include <stdio.h>

char	*ft_strlowcase(char *str) 
{
	while (*str) 
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return str;
}
/*
int	main(void)
{
	char	s[] = "GAME OF THRONES";
	ft_strlowcase(s);
	printf("%s", s);
}
*/
