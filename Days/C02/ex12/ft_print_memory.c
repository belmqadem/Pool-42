#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_byte_hex(unsigned char byte)
{
    if ((byte / 16) < 10)
        ft_putchar(48 + (byte / 16));
    else
        ft_putchar(87 + (byte / 16));
    if ((byte % 16) < 10)
        ft_putchar(48 + (byte % 16));
    else
        ft_putchar(87 + (byte % 16));
}

// print the address in hexadecimal.
void print_address_in_hex(void *addr)
{
    unsigned char *ptr_byte;
    int little_endian;

    little_endian = 7;
    ptr_byte = (unsigned char *)&addr;
    while (little_endian >= 0)
    {
        ft_byte_hex(*(ptr_byte + little_endian));
        little_endian--;
    }
    ft_putchar(':');
}

// print the content in hexadecimal.
void print_content_in_hex(void *str, unsigned int size)
{
    int i;
    short limit;

    limit = 16;
    i = 0;
    while (--size && limit--)
    {
        if (!(i % 2))
            ft_putchar(' ');
        ft_byte_hex(*((unsigned char *)str));
        str++;
        i++;
    }
    if (i % 2)
        write (1, "  ", 2);
    else
        write (1, " ", 1);
}

// The content in printable characters.
void print_content(void *str, unsigned int size)
{
    short limit;

    limit = 16;
    while (--size && limit--)
    {
        if (*(char *)str >= 32 && *(char *)str < 127)
            write (1, str, 1);
        else
            write (1, ".", 1);
        str++;
    }
    write (1, "\n", 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    if (size == 1)
        return (addr);
    print_address_in_hex(addr);
    print_content_in_hex(addr, size);
    print_content(addr, size);
    return (addr);
}
/*
int main()
{
    char str[] = "Bonjour les amis----";
    char str2[] = "chez\t\t\nc est fo---";
    ft_print_memory((void *)str, sizeof(str));
    ft_print_memory((void *)str2, sizeof(str2));
    ft_print_memory((void *)str2, sizeof(str2));
    ft_print_memory((void *)str2, sizeof(str2));
    ft_print_memory((void *)str2, sizeof(str2));
}
*/
