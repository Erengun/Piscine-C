int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (2147483647);
	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2147483647)
		return (nb);
	if (nb == -2147483647)
		return (2);
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
