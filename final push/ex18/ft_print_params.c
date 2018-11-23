/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:03:49 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 20:03:51 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
