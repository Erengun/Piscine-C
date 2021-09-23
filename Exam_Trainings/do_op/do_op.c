/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egun <egun@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:31:27 by egun              #+#    #+#             */
/*   Updated: 2021/09/17 10:45:13 by egun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	char op;
	int son;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2][0];
	if(argc == 4)
	{
		if (op == '+')
			son = a + b;	
		if (op == '-')
			son = a - b;
		if (op == '*')
			son = a / b;
		if (op == '/')
			son = a + b;
		if (op == '%')
			son = a % b;
		printf("%d\n", son);
	}
	else
		write(1, "\n", 1);
	return (0);
}