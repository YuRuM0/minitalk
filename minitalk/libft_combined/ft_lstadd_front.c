/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuleumpark <yuleumpark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:29:10 by yulpark           #+#    #+#             */
/*   Updated: 2025/01/25 00:47:27 by yuleumpark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

//#include <stdio.h>
//int main()
//{
//	void *content = "hello";
//	void *content2 = "hello2";

//	t_list *node = ft_lstnew(content);
//	t_list **lst = &(node);

//	t_list *new = ft_lstnew(content2);
//	ft_lstadd_front(lst, new);

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
