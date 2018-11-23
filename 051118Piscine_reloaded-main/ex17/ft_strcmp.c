/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:52:21 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 19:52:22 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int	ft_strcmp(char *s1, char *s2)
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

int main()
{
	char s1[] = "abced";
	char s2[] = "abc";

	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
	printf("strcmp : %d\n", strcmp(s1, s2));
	return 0;
}
