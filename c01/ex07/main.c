/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:07:29 by etemir            #+#    #+#             */
/*   Updated: 2021/10/30 11:59:45 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void ft_rev_int_tab(int *tab, int size);
int main(void)
{
int i = 0;
int dizi[5] = {1, 4, 6, 2, 9};
int size = 5;
ft_rev_int_tab(dizi, size);
while(i < size)
{
	printf(" %d", dizi[i]);
	i++;
}
}
