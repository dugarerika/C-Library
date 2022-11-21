/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:03:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/21 18:46:29 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	i;
// 	char	j;
// 	char	*k;
// 	char	*l;
// 	k = "Hello";
// 	j = '2';
// 	k = &i;
// 	l = &j;
// 	printf("%d", ft_putstr(k));
// 	return (0);
// }
