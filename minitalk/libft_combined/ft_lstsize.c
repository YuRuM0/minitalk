/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:49:12 by yulpark           #+#    #+#             */
/*   Updated: 2025/01/21 17:54:10 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst -> next;
		counter++;
	}
	return (counter);
}

//int main()
//{
//	void *content = "hello";
//	void *content2 = "hello2";

//	t_list *node = ft_lstnew(content);
//	t_list **lst = &(node);

//	t_list *new = ft_lstnew(content2);
//	ft_lstadd_front(lst, new);

//	t_list *head = *lst;
//	int size = ft_lstsize(head);
//	printf("%d", size);
//	return 0;
//}
