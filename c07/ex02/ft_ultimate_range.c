/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:02:02 by etemir            #+#    #+#             */
/*   Updated: 2021/11/12 12:24:44 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	a = (int *)malloc(sizeof(int) * (max - min));
	d = a;
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	while (i < (max - min))
	{
		a[i] = min + i;
		i++;
	}
	*range = a;
	return (max - min);
}
/*
#include <stdio.h>

int	main()
{
	int	min = 5;
	int	max = 11;
	int	i = 0;
	int	*range;
	printf("%d\n", ft_ultimate_range(&range, min, max));
    while (i < (max - min))
        printf("%d, ", range[i++]);
}
*/
