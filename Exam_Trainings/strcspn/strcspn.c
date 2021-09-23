/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:22:46 by egun              #+#    #+#             */
/*   Updated: 2021/09/17 11:35:54 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t i2;

	i = 0;
	i2 = 0;

	while(s[i])
	{
		i2 = 0;
		while(reject[i2])
		{
			if(s[i] == reject[i2])
				return(i);
			i2++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;	
	return (i);
}

int main()
{
	char *s1;
	char *s2;

	s1 = "abcdef";
	s2 = "ghiklmn";
	printf("%zu\n", ft_strcspn(s1,s2));
}