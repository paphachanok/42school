/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:27:46 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/14 11:53:39 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write2(char z)
{
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 98)
		{
			b++;
			write2 ((a / 10) + '0');
			write2 ((a % 10) + '0');
			write(1, " ", 1);
			write2 ((b / 10) + '0');
			write2 ((b % 10) + '0');
			if (a != 98)
				write(1, ", ", 2);
		}
	a++;
	}
}

int	main(void)
{
	ft_print_comb2();
} 
