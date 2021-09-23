int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] || s2[i])
	{
		while ((s1[i] || s2[i]) && (i < n))
		{
			if (s1[i] < s2[i])
			{
				return (-1);
			}
			else if (s1[i] > s2[i])
			{
				return (1);
			}
			i++;
		}
	}
	return (0);
}
