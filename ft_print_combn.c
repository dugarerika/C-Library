/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:05:20 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/19 06:44:49 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	i;
	char	j;
	char	k;

k = 0;
	while (k <= n)
	{
	i = '0';
		while (i <= '9')
		{
		j = '1';
			while (j <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, " , ", 3);
			j++;
			}
		i++;
		}
	k++;
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// }
