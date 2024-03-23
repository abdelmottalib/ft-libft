/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:28:59 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/18 16:01:42 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;
	size_t	j;

	len_d = 0;
	len_s = 0;
	i = 0;
	j = 0;
	len_s = ft_strlen(src);
	if (size == 0)
		return (len_s);
	len_d = ft_strlen(dest);
	if (size <= len_d)
		j = size + len_s;
	else
		j = len_d + len_s;
	while ((len_d + 1) < size && src[i] != '\0')
		dest[len_d++] = src[i++];
	dest[len_d] = '\0';
	return (j);
}
