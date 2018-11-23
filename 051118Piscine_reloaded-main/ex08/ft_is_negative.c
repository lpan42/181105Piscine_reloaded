/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:28:19 by lpan              #+#    #+#             */
/*   Updated: 2018/11/05 18:28:21 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int a)
{
	if (a < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
	ft_putchar('\n');
}

int		main(void)
{
	int	a;

	a = 0;
	ft_is_negative(a);
	return (0);
}
