/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:00:42 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 19:10:58 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	newstring = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	temp = newstring;
	if (!newstring)
		return (NULL);
	while (*s1 != '\0')
	{
		*newstring = *s1;
		newstring++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*newstring = *s2;
		newstring++;
		s2++;
	}
	*newstring = '\0';
	return (temp);
}
//int main()
//{
//	char const *s1 = NULL;
//	char const *s2 = "hello";
//	char *newstring = ft_strjoin(s1, s2);
//	printf("%s", newstring);
//	free(newstring);
//	return(0);
//}
