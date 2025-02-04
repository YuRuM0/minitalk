/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:08:40 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/26 18:34:10 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*result;

	result = malloc(nmenb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmenb * size);
	return (result);
}

//int main()
//{
//   int *array;

//   array = (int*)ft_calloc(10, 0);
//   printf("%s", array);
//   for (int i = 0; i < 10; i++) {
//      printf("%d ", array[i]);
//   }
//   printf("\n");
//   free(array);
//   return 0;
//}
