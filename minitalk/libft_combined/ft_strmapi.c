/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:29:26 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/15 20:58:53 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
//char to_upper(unsigned int i, char c)
//{
//    (void)i;
//	if (c >= 'a' && c <= 'z')
//		c -= 32;
//	return(c);
//}

//int main()
//{
//    char *input = "hello world";
//    char *output;
//    output = ft_strmapi(input, to_upper);
//    if (output)
//    {
//        printf("Output: %s\n", output);
//        free(output);
//    }
//    else
//        printf("Error: ft_strmapi returned NULL\n");
//}
