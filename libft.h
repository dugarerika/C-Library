/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 07:12:52 by etavera-          #+#    #+#             */
/*   Updated: 2022/12/12 15:19:35 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
#include <libft.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_toupper(int str);
int	ft_tolower(int str);
int	ft_isdigit(int c);

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dst, char *src, size_t size);

void	ft_bzero(void *str, unsigned int n);
void	*ft_memset(void *str, int a, unsigned int n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

#endif
