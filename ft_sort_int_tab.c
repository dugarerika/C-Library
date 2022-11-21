/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:03:05 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/22 19:26:56 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	while (i < size)
	{
		k = i +1;
		while (k < size)
		{
			if (tab[k] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
			k++;
			}
			else
			{
				k++;
			}
		}
	i++;
	}
}

int	main(void)
{
	int	s[] = {9, 1, 8, 4};
	int *t1 = s;
	ft_sort_int_tab(t1, 4);
	printf("%d" , s[0]);
	printf("%d" , s[1]);
	printf("%d" , s[2]);
	return (0);
}
