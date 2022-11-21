/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/08 06:59:22 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	k;
	int	result;

	k = 0;
	result = 1;
	while (str[k] != '\0')
	{
		if ((str[k] >= 'a' && str[k] <= 'z')
			|| (str[k] >= 'A' && str[k] <= 'Z'))
		{
			result = 1;
			k++;
		}
		else
		{
			result = 0;
			break ;
		}
	}
	return (result);
}

int	main(void)
{
	char src[] = " ";
	char dest[60];

	ft_str_is_alpha(src);
	printf ("%d",ft_str_is_alpha(src) );
}
