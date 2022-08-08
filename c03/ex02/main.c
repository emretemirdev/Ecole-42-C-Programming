/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:33:04 by etemir            #+#    #+#             */
/*   Updated: 2021/11/03 15:52:20 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char *ft_strcat(char *dest, char *src);
int main (void)
{
	char str1[] = "dolu";	 
	char str2[] = "sevgi";
	ft_strcat(str1, str2);
	printf("%s", ft_strcat(str1, str2));
}
