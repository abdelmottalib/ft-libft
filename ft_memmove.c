/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:03:47 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/14 08:59:50 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*de;
	unsigned char	*sc;
	size_t			i;

	i = 0;
	de = (unsigned char *)dst;
	sc = (unsigned char *)src;
	if (!de && !sc)
		return (0);
	if (de > sc)
	{
		while (i < len)
		{
			de[len - 1] = sc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
