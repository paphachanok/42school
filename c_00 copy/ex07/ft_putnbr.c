/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:46:29 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/14 14:50:38 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int input)
{
	if (input == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		input = 147483648;
	}
	if (input < 0)
	{
		ft_putchar('-');
		input *= -1;
	}
	if (input < 10)
	{
		ft_putchar(input + 48);
		return ;
	}
	else
		ft_putnbr(input / 10);
	ft_putnbr(input % 10);
}

int	main(void)
{
	int	i;

	//ft_putnbr(-2147483649);
	i = 100;
	while (i <=111)
	{
		ft_putnbr(i);
		write(1, " ", 1);
		i++;
	}
}
