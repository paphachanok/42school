/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:04:56 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 09:08:02 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	last;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			last = second + 1;
			while (last <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &last, 1);
				if (first != '7')
					write(1, ", ", 2);
			last++;
			}
		second++;
		}
	first++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
} */
