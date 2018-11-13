/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 16:47:02 by kbui              #+#    #+#             */
/*   Updated: 2018/06/03 22:12:59 by kbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

char			*ft_remove_whitespaces(char *str);
long long		ft_do_math(long long a, char oper, long long b);
long long		ft_parse_input(char **expr);
long long		ft_parse_factors(char **expr);
long long		ft_parse_sum(char **expr);
int				eval_expr(char *expr);

#endif
