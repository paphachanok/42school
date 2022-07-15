/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:46:29 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/15 23:32:13 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	if (input <= -10)
	{
		ft_putchar('-');
		ft_putchar(' ');
		ft_putnbr(input / 10);
		ft_putnbr(input % 10);
	}

	if (input < 0 && input < -9)
	{
		ft_putchar('-');
		input *= -1;
		ft_putchar(input);
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

	i = -123;
	while (i <= 5)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		i++;
	}
	//ft_putnbr(123);
	//ft_putnbr(-123);
}
