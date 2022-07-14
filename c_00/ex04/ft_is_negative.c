/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:32:11 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/13 15:41:52 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'P';
	b = 'N';
	if (n < 0)
	{
		write(1, &b, 1);
	}
	else
	{
		write(1, &a, 1);
	}
}

int	main(void)
{
	ft_is_negative(0);
}