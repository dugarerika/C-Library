/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:59:10 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/25 09:02:32 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ((void) 0);
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putchar_fd(8369, 1);
// }
