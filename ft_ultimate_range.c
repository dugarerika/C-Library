/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:48:33 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/05 14:36:50 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	k;
	int	l;

	l = max - min;
	if (min > max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int *));
	if (!range)
		return (-1);
	k = 0;
	while (min < max)
	{
		*range[k] = min;
		min++;
		k++;
	}
	return (l);
}

int	main(void)
{
	int	*range;
	// int	i;

	// i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, 5, 50));
	return (0);
}
