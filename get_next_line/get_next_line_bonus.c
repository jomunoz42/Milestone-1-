/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:20:35 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/20 21:49:15 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		readbytes;

	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	readbytes = 1;
	while (!if_new_line_exists(line))
	{
		if (*buffer[fd] == '\0')
			readbytes = read(fd, buffer[fd], BUFFER_SIZE);
		if (readbytes == -1)
			return (free(line), NULL);
		if (readbytes == 0)
			return (line);
		line = copy_to_line(line, buffer[fd]);
		get_the_rest(buffer[fd]);
	}
	return (line);
}
/* 
int main(void)
{
	int     fd;
	int     fd2;
	int     fd3;

	char    *line;

	fd = open("teste1.txt", O_RDONLY);
	fd2 = open("teste2.txt", O_RDONLY);
	fd3 = open("teste3.txt", O_RDONLY);
	
	line = get_next_line(fd);
	printf("From test1: %s", line);

	free(line);
	
	line = get_next_line(fd2);
	printf("From test2: %s", line);

	free(line);

	line = get_next_line(fd3);
	printf("From test3: %s", line);

	free(line);

	line = get_next_line(fd);
	printf("From test1: %s", line);

	free(line);

	line = get_next_line(fd2);
	printf("From test2: %s", line);

	free(line);

	line = get_next_line(fd3);
	printf("From test3: %s", line);

	free(line);

	line = get_next_line(fd);
	printf("From test1: %s", line);

	free(line);
	
	line = get_next_line(fd2);
	printf("From test2: %s", line);

	free(line);

	line = get_next_line(fd3);
	printf("From test3: %s", line);
	
	free(line);
	return (0);
} */