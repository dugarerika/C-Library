/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:45:13 by etavera-          #+#    #+#             */
/*   Updated: 2022/09/25 12:54:46 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	hexa(int d)
{
	char	mod;
	char	*acum;

	while (d != 0)
	{
		mod = d % 16;
		if (mod <= 9)
		{
			mod = mod + 48;
			write(1, &mod, 1);
		}
		else if (mod <= 15 && mod >= 10)
		{
			mod = mod + 87;
			write(1, &mod, 1);
		}
		d = d / 16;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	k;
	int	c;

	k = 0;
	while (str[k] != '\0')
	{
		c = str[k];
		if ((str[k] >= 0 && str[k] <= 31) || str[k] == 127)
		{
			write(1, "/", 1);
			if (c >= 0 && c <= 15)
			{
				write(1, "0", 1);
			}
			hexa(c);
		}
		else
		{
			write(1, &c, 1);
		}
	k++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// 	// hexa(100);
// }
