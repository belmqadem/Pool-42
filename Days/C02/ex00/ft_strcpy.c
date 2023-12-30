#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s[] = "valarmorghulis";
	char	d[20];
	printf("%s\n", ft_strcpy(d, s));
	printf("%s\n", strcpy(d, s));
}
*/
