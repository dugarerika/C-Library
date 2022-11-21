/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:32:49 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/19 16:40:36 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pline(char a, char b)
{
	if (a == '9' && b == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " $ ", 3);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " , ", 3);
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;

k = '0';
	while (k <= '3')
	{
	i = '0';
		while (i <= '9')
		{
		j = '1';
			while (j <= '9')
			{
				if (k == '0')
				{
					pline('0', '0');
				}
				pline(i, j);
			j++;
			}
		i++;
		}
	k++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
