/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:00:09 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/12 17:37:20 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
//
//int main()
//{
//	t_list *a, *b, *c, *d;
//	a = ft_lstnew("hello");
//	b = ft_lstnew("hello");
//	c = ft_lstnew("hello");
//	d = ft_lstnew("hello");
//	a -> next = b;
//	b -> next = c;
//	c -> next = d;
//	printf("%d\n", ft_lstsize(a));
//	
//}
