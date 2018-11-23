/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:11:06 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 21:11:08 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if(*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 1)
	{
		if((ft_strcmp(argv[i], argv [i + 1])) > 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
