/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:56:04 by etemir            #+#    #+#             */
/*   Updated: 2021/11/12 12:01:22 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*a;
	int	*d;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	a = (int *)malloc(sizeof(int) * len);
	d = a;
	if (!d)
		return (0);
	while (i < len)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
/*
#include <stdio.h>

int	main()
{
	int min = 5;
	int max = 10;
	int i = 0;
	int *a;
	a = ft_range(min, max);
	while (i < (max - min))
		printf("%d, ",a[i++]);
	printf("\n"); 
}
*/
