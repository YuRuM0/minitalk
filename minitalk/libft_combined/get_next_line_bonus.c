/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:43:30 by yulpark           #+#    #+#             */
/*   Updated: 2025/01/18 22:35:34 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_free(char *result, char *buffer, int bytes_read)
{
	char	*temp;

	buffer[bytes_read] = '\0';
	if (!result)
		result = ft_strdup("");
	temp = ft_strjoin(result, buffer);
	free(result);
	return (temp);
}

static char	*ft_findn(int fd, char *remainder, int bytes_read)
{
	char	*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
	{
		free(remainder);
		return (NULL);
	}
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(remainder);
			return (ft_free_and_null(&buffer));
		}
		if (bytes_read == 0)
			break ;
		remainder = ft_free(remainder, buffer, bytes_read);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (remainder);
}

static char	*ft_lineprinter(char	*remainder)
{
	char	*result;
	int		i;

	i = 0;
	if (remainder[0] == '\0')
		return (NULL);
	while (remainder[i] != '\0' && remainder[i] != '\n')
		i++;
	if (remainder[i] == '\0')
		return (ft_strdup(remainder));
	else
		result = malloc((i + 2) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (remainder[i] != '\0' && remainder[i] != '\n')
	{
		result[i] = remainder[i];
		i++;
	}
	result[i] = '\n';
	result[i + 1] = '\0';
	return (result);
}

static char	*ft_nextkeeper(char *remainder)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	while (remainder[i] != '\0' && remainder[i] != '\n')
		i++;
	if (remainder[i] == '\0' || remainder[i + 1] == '\0')
	{
		free(remainder);
		return (NULL);
	}
	i++;
	result = malloc((ft_strlen(remainder) - i + 1) * sizeof(char));
	if (!result)
		return (ft_free_and_null(&remainder));
	j = 0;
	while (remainder[i + j] != '\0')
	{
		result[j] = remainder[i + j];
		j++;
	}
	result[j] = '\0';
	free(remainder);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*remainder[1024];
	char		*result;
	int			bytes_read;

	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (ft_free_and_null(&remainder[fd]));
	remainder[fd] = ft_findn(fd, remainder[fd], bytes_read);
	if (!remainder[fd])
		return (NULL);
	result = ft_lineprinter(remainder[fd]);
	if (!result)
		return (ft_free_and_null(&remainder[fd]));
	remainder[fd] = ft_nextkeeper(remainder[fd]);
	return (result);
}

//#include <limits.h>
//int main()
//{
//	//int fd1 = open("variable_nls.txt", O_RDONLY);
//	//int fd2 = open("lines_around_10.txt", O_RDONLY);

//	//char *result = "";
//	//result = get_next_line(fd1);
//	//printf("%s", result);
//	//close(fd1);
//	printf("FOPEN_MAX = %d\n",_SC_OPEN_MAX);
//	return 0;
//}
//int main()
//{
//	int fd = open("bible.txt", O_RDONLY);
//	char *result = "";

//	while (result != NULL)
//	{
//		result = get_next_line(fd);
//		if (result != NULL)
//		{
//			printf("%s", result);
//			free(result);
//		}
//	}
//	close(fd);
//	return 0;
//}
