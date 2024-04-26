/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:49:15 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/26 10:30:43 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*char_s;
	size_t		i;

	char_s = s;
	i = 0;
	if (n == 0 || c < 0)
		return (NULL);
	if (c > 255)
		c = c % 256;
	while (i < n)
	{
		if (char_s[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
