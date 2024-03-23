/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:01:50 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/14 12:41:31 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sc;
	size_t			i;

	de = (unsigned char *)dst;
	sc = (unsigned char *)src;
	i = 0;
	if (!de && !sc)
		return (NULL);
	while (i < n)
	{
		*(de + i) = *(sc + i);
		i++;
	}
	return (de);
}
