/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:51:14 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 16:51:16 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int result;

	result = 0;
	while ( result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}

int	main()
{
	printf("%d\n", ft_sqrt(55225));
	return (0);
}
