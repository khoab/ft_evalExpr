/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:57:14 by kbui              #+#    #+#             */
/*   Updated: 2018/06/03 22:12:36 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "header.h"

long long		ft_parse_input(char **expr)
{
	long long	nbr;
	long long	is_pos;

	nbr = 0;
	is_pos = 1;
	if (**expr == 43 || **expr == 45)
	{
		if (**expr == 45)
			is_pos = -1;
		(*expr)++;
	}
	if (**expr == 40)
	{
		(*expr)++;
		nbr = ft_parse_sum(expr);
		if (**expr == 41)
			(*expr)++;
		return (is_pos * nbr);
	}
	nbr = ft_atoi(expr);
	return (is_pos * nbr);
}

long long		ft_parse_factors(char **expr)
{
	long long		nbr;
	long long		nbr2;
	char			oper;

	nbr = ft_parse_input(expr);
	while (**expr == 42 || **expr == 47 || **expr == 37)
	{
		oper = **expr;
		(*expr)++;
		nbr2 = ft_parse_input(expr);
		nbr = ft_do_math(nbr, oper, nbr2);
	}
	return (nbr);
}

long long		ft_parse_sum(char **expr)
{
	long long		nbr;
	long long		nbr2;
	char			oper;

	nbr = ft_parse_factors(expr);
	while (**expr != '\0' && **expr != 41)
	{
		oper = **expr;
		(*expr)++;
		if (oper == 43 || oper == 45)
			nbr2 = ft_parse_factors(expr);
		else
			nbr2 = ft_parse_input(expr);
		nbr = ft_do_math(nbr, oper, nbr2);
	}
	return (nbr);
}

int				eval_expr(char *str)
{
	str = ft_remove_whitespaces(str);
	if (*str == '\0')
		return (0);
	return (ft_parse_sum(&str));
}
