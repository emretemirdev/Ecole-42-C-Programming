/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:44:22 by etemir            #+#    #+#             */
/*   Updated: 2021/10/23 16:55:11 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	poz;
	char	neg;

	poz = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &poz, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}