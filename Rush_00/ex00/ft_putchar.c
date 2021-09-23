#include <unistd.h>

void	ft_putchar(char *str)
{
	write (1, str, 1);
}
