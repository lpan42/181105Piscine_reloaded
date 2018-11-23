/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:51:09 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 17:51:11 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
}

int main()
{
	char str[10] = "abcdefg";
	char *ptr = str;

	ft_putstr(ptr);
	return 0;
}
