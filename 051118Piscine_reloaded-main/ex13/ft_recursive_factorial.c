/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:44:28 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 16:44:30 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb <= 12)
		return (ft_recursive_factorial(nb - 1) * nb);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}

int	main()
{
	printf("%d\n", ft_recursive_factorial(1));
	return (0);
}
