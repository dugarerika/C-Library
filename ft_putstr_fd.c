/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:59:15 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/21 10:40:02 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str != NULL)
	{
		write(fd, &str[i], 1);
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
