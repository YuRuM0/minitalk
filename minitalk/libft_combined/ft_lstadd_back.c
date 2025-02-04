/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuleumpark <yuleumpark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:03:34 by yulpark           #+#    #+#             */
/*   Updated: 2025/01/25 00:49:23 by yuleumpark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		end = ft_lstlast(*lst);
		end -> next = new;
	}
}

//#include <stdio.h>
//int main()
//{
//	void *content = "hello";
//	void *content2 = "hello2";
//	void *content3 = "hello3";

//	t_list *node = ft_lstnew(content);
//	t_list **lst = &(node);
//	t_list *new = ft_lstnew(content2);
//	ft_lstadd_front(lst, new);

//	t_list *new2 = ft_lstnew(content3);
//	ft_lstadd_back(lst, new2);

//	t_list *head = *lst;
//	while (head)
//	{
//		printf("%s", (char *)head -> content);
//		head = head -> next;
//		if (head)
//            printf(" -> ");
//	}
//	head = *lst;
//	while (head)
//	{
//		t_list *temp = head;
//		head = head -> next;
//		free (temp);
//	}
//	return 0;
//}
