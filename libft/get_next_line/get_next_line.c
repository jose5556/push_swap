/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:53:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 13:44:13 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	get_next_line(int fd, char **line)
{
	static char	*buffer[FD_MAX];
	char		*result;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line)
		return (-1);
	buffer[fd] = read_line(fd, buffer[fd]);
	if (!buffer[fd])
		return (0);
	result = filter_buffer(buffer[fd]);
	buffer[fd] = handle_next(buffer[fd]);
	if (!result)
		return (-1);
	*line = ft_strdup(result);
	free(result);
	return (1);
}

char	*filter_buffer(char *buffer)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	k = i;
	if (buffer[i] == '\n')
		k++;
	result = ft_calloc(k + 1, sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		result[j] = buffer[j];
		j++;
	}
	return (result);
}

char	*read_line(int fd, char *buffer)
{
	char	*temp_buf;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, sizeof(char));
	if (!buffer)
		return (NULL);
	temp_buf = ft_calloc(BUFFER_SIZE + 1, 1);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, temp_buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(temp_buf);
			free(buffer);
			return (NULL);
		}
		temp_buf[bytes_read] = '\0';
		buffer = ft_strjoin_free_special(buffer, temp_buf);
	}
	free(temp_buf);
	return (buffer);
}

char	*handle_next(char *buffer)
{
	char	*result;
	int		i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	result = ft_strdup(buffer + i + 1);
	free(buffer);
	return (result);
}

/* int	main(void)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	fd = open("./example2.txt", O_RDONLY);
	while (line = get_next_line(fd+1))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
} */