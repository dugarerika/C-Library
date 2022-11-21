/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 07:50:44 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/02 09:58:47 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	k;
	int	acum;

	k = 0;
	acum = 1;
	if (power < 0)
		return (0);
	while (k < power)
	{
		acum = acum * nb;
		k++;
	}
	return (acum);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(0,2));
// 	printf("%d", ft_iterative_power(0,-2));
// }
