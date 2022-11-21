/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:03:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/21 14:30:27 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
	i++;
	}
}

// int	main(void)
// {
// 	char	i;
// 	char	j;
// 	char	*k;
// 	char	*l;

// 	k = "Hello";
// 	j = '2';
// 	// k = &i;
// 	// l = &j;

// 	ft_putstr(k);

// 	return (0);
// }
