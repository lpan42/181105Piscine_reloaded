/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:50:43 by lpan              #+#    #+#             */
/*   Updated: 2018/11/08 11:50:45 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *ptr;
	int *result;
	int i;

	i = max - min;
	if (min >= max)
		return (0);
	result = (int*)malloc(sizeof(int) * (i + 1));
	if (result == 0)
		return (0);
	ptr = result;
	while (min < max)
	{
		*ptr = min;
		ptr++;
		min++;
	}
	return (result);
}

int main()
{
	int		min;
	int		max;
	int		*p;
	int 	i;

	i = 0;
	min = 0;
	max = 10;

	p = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\t", p[i]);
		i++;
	}
	return (0);
}
