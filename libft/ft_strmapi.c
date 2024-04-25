/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:54:19 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/25 13:50:05 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		size;
	char	*new_str;

	size = ft_strlen(s) + 1;
	new_str = (char *)malloc(size * sizeof(char));
	ft_striteri((char *)s, (void *)f);
	ft_strlcpy(new_str, s, size);
	return (new_str);
}
