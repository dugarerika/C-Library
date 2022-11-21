/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:48:16 by etavera-          #+#    #+#             */
/*   Updated: 2022/10/05 10:59:04 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*vect;

	j = 0;
	if (min >= max)
		return (0);
	vect = (int *) malloc((max - min) * sizeof(int *));
	if (vect == NULL)
		return (0);
	while (min < max)
	{
		vect[j] = min;
		min++;
		j++;
	}
	return (vect);
}

int	main()
{
	int min = -10;
	int max = 9;
	int i = 0;
	int *info = NULL;
	info = ft_range(min,max);
	while (i < (max - min))
	{
		printf("%d", info[i]);
		printf("%c", ',');
		i++;
	}
}
