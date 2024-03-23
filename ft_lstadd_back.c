/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:32:37 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/13 13:07:46 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst)
	{
		temp = ft_lstlast(*lst);
		temp -> next = new;
	}
	else if (!new)
		return ;
	else
	{
		*lst = new;
		return ;
	}
}
//
//int main()
//{
//	t_list *a, *b, *c, *d;
//	a = ft_lstnew("hello ");
//	b = ft_lstnew("hello ");
//	c = ft_lstnew("hello ");
//	d = ft_lstnew("hello ");
//	a -> next = b;
//	b -> next = c;
//	t_list *temp =  a;
//	while(temp)
//	{
//		printf("%s", temp -> content);
//		temp = temp -> next;
//	}
//	printf("\n");
//	t_list *tempp = a;
//	ft_lstadd_back(&tempp, d);
//	while(a)
//	{
//		printf("%s", a -> content);
//		a = a -> next;
//	}
//
//}
