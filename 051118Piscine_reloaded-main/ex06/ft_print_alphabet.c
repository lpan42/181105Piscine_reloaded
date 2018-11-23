/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:10:21 by lpan              #+#    #+#             */
/*   Updated: 2018/11/05 18:16:57 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alp;

	alp = 'a';
	while (alp <= 'z')
	{
		ft_putchar(alp);
		alp++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
