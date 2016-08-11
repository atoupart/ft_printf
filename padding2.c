/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 11:09:30 by atoupart          #+#    #+#             */
/*   Updated: 2016/08/11 11:09:34 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_prefix(char **retstr, int i, t_flags *flags)
{
	if (flags->ct == 'x' || flags->ct == 'p')
	{
		(*retstr)[i++] = '0';
		(*retstr)[i++] = 'x';
	}
	else if (flags->ct == 'X')
	{
		(*retstr)[i++] = '0';
		(*retstr)[i++] = 'X';
	}
	else if (flags->ct == 'o' || flags->ct == 'O')
		(*retstr)[i++] = '0';
	return (i);
}

int			ft_c_fill(int i, int len, char c, char **str)
{
	int	j;

	j = 0;
	while (j <= len)
	{
		(*str)[i + j] = c;
		j++;
	}
	return (i + j);
}

char		*ft_num_prec(int n, char *str)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	tmp = ft_strnew(n);
	i = 0;
	if (*str == '-')
	{
		tmp[i++] = '-';
		(*str)++;
	}
	while (i < n)
		tmp[i++] = '0';
	tmp2 = ft_strdup(str);
	str = ft_strjoin(tmp, tmp2);
	ft_strdel(&tmp);
	ft_strdel(&tmp2);
	return (str);
}
