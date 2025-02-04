/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:22:01 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/26 19:21:32 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_valuecount(const char *str, char c)
{
	int	val;
	int	checker;

	val = 0;
	checker = 0;
	while (*str)
	{
		if (*str == c)
			checker = 0;
		else if (checker == 0 && *str != c)
		{
			checker = 1;
			val++;
		}
		str++;
	}
	return (val);
}

static char	**ft_free(char **grid)
{
	int	i;

	i = 0;
	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	return (NULL);
}

static char	**ft_gridmaker(char **grid, char const *s, char c)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = i;
			while (s[i] != c && s[i])
				i++;
			grid[j] = malloc(sizeof(char) * (i - size + 1));
			if (!grid[j])
				return (ft_free(grid));
			ft_strlcpy(grid[j], s + size, (i - size + 1));
			j++;
		}
	}
	grid[j] = NULL;
	return (grid);
}

char	**ft_split(char const *s, char c)
{
	char	**grid;
	int		val;

	if (!s)
		return (NULL);
	val = ft_valuecount(s, c);
	grid = malloc(sizeof(char *) * (val + 1));
	if (!grid)
		return (NULL);
	grid = ft_gridmaker(grid, s, c);
	if (!grid)
		return (NULL);
	return (grid);
}

// int main()
// {
//     char **result;
//     result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
//    // printf("%d\n",ft_valuecount("^^^1^^2a,^^^^3^^^^--h^^^^", '^'));
//      if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("%s\n", result[i]);
//         }
//         ft_free(result);
//     }
//     return 0;
// }
