/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:01:34 by etavera-          #+#    #+#             */
/*   Updated: 2023/01/25 09:45:06 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return ((void *) p);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

// int main()
// {

// 	char *str = (char *)ft_calloc(30, 1);
// 			if (!str)
// 			write(1, "NULL", 4);
// 		else
// 			write(1, str, 30);
// }
