/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 07:52:16 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/01 20:41:38 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(10000));
// 	printf("%d\n", ft_sqrt(100));
// 	printf("%d\n", ft_sqrt(49));
// 	printf("%d\n", ft_sqrt(48));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(-1));
// 	printf("%d\n", ft_sqrt(2));
// }
