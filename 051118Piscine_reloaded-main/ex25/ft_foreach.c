/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:40:03 by lpan              #+#    #+#             */
/*   Updated: 2018/11/09 16:40:07 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print(int i)
{
	printf("%d\n", i);
}

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int main()
{
	int i[] = {2,6,4,2,4};
	ft_foreach(i, 5, print);
	return (0);
}
