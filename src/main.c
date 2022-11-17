/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:57:51 by adam              #+#    #+#             */
/*   Updated: 2022/11/17 12:12:42 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAXLEN 10

#include <stdio.h>
#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	str[MAXLEN];
	char	c;
	int	i;

	i = 0;
	while ((c = getchar()) != '\n' && i <= (MAXLEN - 1))
		str[i++] = c;
	putstr(str);
	return (0);
}
