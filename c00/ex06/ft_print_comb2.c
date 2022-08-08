/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etemir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:39:55 by etemir            #+#    #+#             */
/*   Updated: 2021/10/23 20:40:04 by etemir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char f, char s, char t, char fr)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, " ", 1);
	write(1, &t, 1);
	write(1, &fr, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	char	f;
	char	s;
	char	t;
	char	fr;

	f = '0';
	while (f <= '9')
	{
		t = f;
		s = '0';
		while (s <= '9')
		{
			fr = s + 1;
			while (fr <= '9')
			{
				putchar(f, s, t, fr);
				fr++;
			}
			s++;
		}
		f++;
	}
}
