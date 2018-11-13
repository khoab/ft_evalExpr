/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 23:24:49 by kbui              #+#    #+#             */
/*   Updated: 2018/06/03 20:31:45 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"
#include "header.h"

char		*ft_remove_whitespaces(char *str)
{
	int		i;
	int		j;
	char	*rm;

	i = -1;
	j = -1;
	rm = malloc(sizeof(*rm) * (ft_strlen(str) + 1));
	while (str[++i])
	{
		if (str[i] != 32)
			rm[++j] = str[i];
	}
	rm[++j] = '\0';
	return (rm);
}

long long	ft_do_math(long long a, char oper, long long b)
{
	if (oper == 43)
		return (a + b);
	else if (oper == 45)
		return (a - b);
	else if (oper == 42)
		return (a * b);
	else if (oper == 47)
		return (a / b);
	else if (oper == 37)
		return (a % b);
	else
		return (0);
}
