#include <unistd.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i;	
	size_t	x;

	i = 0;
	x = 0;
	while(s[x])
	{
		while (reject[i])
		{
			if (s[x] == reject[i])
			{
				return (i);
			}
			i++;
		}
		x++;
	}
	return (0);
}

int	main()
{
	char *str1;
	char *str2;

	str1 = "dca";
	str2 = "Selam";
	ft_strcspn(str1,str2);
}
