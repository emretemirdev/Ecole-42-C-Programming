/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 21:59:39 by etemir            #+#    #+#             */
/*   Updated: 2021/10/30 13:21:11 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str);
int main(void)
{

	char dizi[] = "qwkrtwejrgekrle";
	ft_strlen(dizi);
	printf("dizim %d karakterli \n", ft_strlen(dizi));
}
