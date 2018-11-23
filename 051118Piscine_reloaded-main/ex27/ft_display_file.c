/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:58:49 by lpan              #+#    #+#             */
/*   Updated: 2018/11/09 17:58:51 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void ft_putchar(char c)
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

void	ft_display_file(int fd)
{
	char buf;
	while(read(fd, &buf, 1))
		write(1, &buf, 1);
}

int main(int argc, char **argv)
{
	int fd;

	fd = open(argv[1], O_RDONLY);
	if (argc == 2)
	{
		ft_display_file(fd);
		close(fd);
	}
	if (argc < 2)
		ft_putstr("File name missing.\n");
	if(argc > 2)
		ft_putstr("Too many arguments.\n");
	return(0);
}
