/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:43 by etavera-          #+#    #+#             */
/*   Updated: 2022/11/24 12:22:17 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *s)
{
	unsigned int	k;

	k = 0 ;
	while (s[k] != '\0')
		k++;
	return (k);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	ldst = ft_length(dst);
	lsrc = ft_length(src);

	while (*dst && size > 0 && size --)
	{
		dst ++;
		i++;
	}
	while (*src && size > 1 && size --)
	{
		*dst++ = *src++;
	}
	if (size == 1)
		*dst = '\0';
	return (ldst + i);
}

int	main(void)
{
	char	primero[] = "Este es";
	char	ultimo[] = "un potencial larga";
	int	r;
	int s;
	int	tamano = 15;
	char	buffer1[tamano];
	char	buffer2[tamano];
	strcpy(buffer1, primero);
	strcpy(buffer2, primero);
	r = strlcat(buffer1,ultimo,tamano);
	s = ft_strlcat(buffer2,ultimo,tamano);
	puts(buffer1);
	puts(buffer2);
	printf("Value returned: %d\n", r);
	if (r > tamano)
		puts("String truncated");
	else
		puts("String was fully copied");
printf("Value returned: %d\n", s);
	if (s > tamano)
		puts("String truncated");
	else
		puts("String was fully copied");
	return (0);
}
