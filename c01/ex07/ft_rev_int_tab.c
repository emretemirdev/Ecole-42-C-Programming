/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:07:20 by etemir            #+#    #+#             */
/*   Updated: 2021/10/30 13:41:53 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	kalan;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		kalan = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = kalan;
		i++;
		size--;
	}
}
