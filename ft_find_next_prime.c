/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 07:52:23 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/02 13:21:53 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 0;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i < nb)
		{
			if (nb % i != 0)
				flag = 1;
			else
			{
				flag = 0;
				break ;
			}
			i++;
		}
	}
	return (flag);
}

int	ft_find_next_prime(int nb)
{
	int	k;

	k = nb;
	while (ft_is_prime(k) == 0)
	{
		k++;
	}
	return (k);
}

// int	main(void)
// {
// printf("%d\n", ft_find_next_prime(0));
// printf("%d\n", ft_find_next_prime(1));
// printf("%d\n", ft_find_next_prime(2));
// printf("%d\n", ft_find_next_prime(3));
// printf("%d\n", ft_find_next_prime(5));
// printf("%d\n", ft_find_next_prime(7));
// printf("%d\n", ft_find_next_prime(11));
// printf("%d\n", ft_find_next_prime(13));
// printf("%d\n", ft_find_next_prime(17));
// printf("%d\n", ft_find_next_prime(19));
// printf("%d\n", ft_find_next_prime(21));
// printf("%d\n", ft_find_next_prime(22));
// }
