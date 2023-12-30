#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_hex(char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	else
		ft_putchar(hex[(unsigned char)n]);
}

void	ft_putstr_non_printable(char *str)
{
	while(*str)
	{
		if (*str < 32 || *str == 127)
		{
			ft_putchar('\\');
			if (*str < 16)
				ft_putchar('0');
			ft_print_hex(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
/*
int	main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
*/
