#include <stdio.h>

char	*ft_strupcase(char *str) 
{
	while (*str) 
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return str;
}
/*
int	main(void)
{
	char	s[] = "say my name";
	ft_strupcase(s);
	printf("%s", s);
}
*/
