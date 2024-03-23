/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:01:05 by aqiouami          #+#    #+#             */
/*   Updated: 2022/10/13 11:52:30 by aqiouami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst && new)
		new -> next = *lst;
	*lst = new;
}
//int main()
//{
//	t_list	*head = ft_lstnew("hello");
//	t_list *temp = head;
//	while(temp)
//	{
//		printf("%s\n", (char *)(temp -> content));
//		temp = temp -> next;
//	}
//	t_list *new = ft_lstnew("new ");
//	ft_lstadd_front(&head, new);
//	while(head)
//	{
//		printf("%s\n", (char *)(head -> content));
//		head = head -> next;
//	}
//}
