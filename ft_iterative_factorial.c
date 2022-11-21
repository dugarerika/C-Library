/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 07:50:33 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/01 20:18:32 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	k;
	int	acum;

	k = 1;
	acum = 1;
	while (k <= nb)
	{
		acum = acum * k;
		k++;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (acum);
}

// int	main(void)
// {
// 	printf("%d\n",ft_iterative_factorial(0));
// 	printf("%d\n",ft_iterative_factorial(1));
// 	printf("%d\n",ft_iterative_factorial(2));
// 	printf("%d\n",ft_iterative_factorial(-545));

// }
