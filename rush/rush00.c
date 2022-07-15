/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:26:18 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/15 21:59:17 by kmanupor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	formatx(int x, int y, int maxx, int maxy)
{
	if (y == maxy || y == 1)
	{
		if (x == maxx || x == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (x == maxx || x == 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int	maxx;
	int	maxy;

	maxy = y;
	maxx = x;
	while (y >= 1)
	{
		while (x >= 1)
		{
			formatx(x, y, maxx, maxy);
			x--;
		}
		ft_putchar('\n');
		x = maxx;
		y--;
	}
}
