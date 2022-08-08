/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:12 by etemir            #+#    #+#             */
/*   Updated: 2021/11/11 18:06:13 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	geri;

	geri = 1;
	while (nb > 0)
	{
		geri *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (geri);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(3));

}
*/
