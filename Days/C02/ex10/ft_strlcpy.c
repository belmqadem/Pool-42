#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main()
{
	char	s[] = "Hello world";
	char	d[20];
	printf("%d\n", ft_strlcpy(d, s, 6));
	printf("%s", d);
}
*/
