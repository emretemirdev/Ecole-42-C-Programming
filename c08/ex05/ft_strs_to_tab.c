/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:35:01 by etemir            #+#    #+#             */
/*   Updated: 2021/11/13 21:35:43 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*a;
	int		len;
	char	*d;

	i = 0;
	len = ft_strlen(str);
	a = (char *)malloc(sizeof(char) * (len + 1));
	d = a;
	if (!d)
		return (0);
	while (i < len)
	{
		a[i] = str[i];
		i++;
	}
	str[i] = '\0';
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*d;
	struct s_stock_str	*cp;

	i = 0;
	cp = malloc(sizeof(struct s_stock_str) * (ac + 1));
	d = cp;
	if (!d)
		return (0);
	while (i < (ac))
	{
		cp[i].size = ft_strlen(av[i]);
		cp[i].str = av[i];
		cp[i].copy = ft_strdup(av[i]);
		i++;
	}
	cp[i].str = 0;
	cp[i].copy = 0;
	return (cp);
}
