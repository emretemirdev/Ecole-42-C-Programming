/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:56:57 by etemir            #+#    #+#             */
/*   Updated: 2021/11/03 14:57:03 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			k++;
		}
		else if (k > 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if ((str[i] < '0' || str[i] > '9') && str[i] < 'A')
			k = 0;
		else if (str[i] > 'Z' && (str[i] < 'a' || str[i] > 'z'))
			k = 0;
		else
			k++;
		i++;
	}
	return (str);
}
