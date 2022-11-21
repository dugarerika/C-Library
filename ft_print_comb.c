/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:57:33 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/19 17:04:57 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pline(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, " $ ", 3);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, " , ", 3);
	}
}

void	ft_print(void)
{
	char	i;
	char	j;
	char	k;

i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			k = '2';
			while (k <= '9')
			{
				if (i != j && j != k && i != k)
				{
					pline(i, j, k);
				}
				k++;
			}
			j++;
		}
	i++;
	}
}

// int	main(void)
// {
// 	ft_print();
// }
