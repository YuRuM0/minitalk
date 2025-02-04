/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:55:09 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/15 21:13:42 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n_string;

	n_string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!n_string)
		return (NULL);
	ft_strlcpy(n_string, s, ft_strlen(s) + 1);
	return (n_string);
}

//int main()
//{
//	const char *s = "helloworld.";
//	char *n_string = ft_strdup(s);
//	printf("%s", n_string);
//}
