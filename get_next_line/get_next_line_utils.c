/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:37:34 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/16 18:22:09 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	get_size(const char *s)
{
	size_t	a;

	a = 0;
	if (!s)
		return (0);
	while (s[a])
	{
		if (s[a++] == '\n')
			break ;
	}
	return (a);
}

int	if_new_line_exists(char *s)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

void	get_the_rest(char *buffer)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (buffer[a] && buffer[a] != '\n')
		a++;
	if (buffer[a] == '\n')
		a++;
	while (buffer[a])
		buffer[b++] = buffer[a++];
	buffer[b] = '\0';
}

char	*copy_to_line(char *line, char *buffer)
{
	char	*new_line;
	char	*temp;
	char	*to_free;

	new_line = malloc(get_size(buffer) + get_size(line) + 1);
	if (!new_line)
	{
		free(line);
		return (NULL);
	}
	temp = new_line;
	to_free = line;
	while (line && *line)
		*temp++ = *line++;
	while (*buffer)
	{
		*temp++ = *buffer;
		if (*buffer++ == '\n')
			break ;
	}
	free(to_free);
	*temp = '\0';
	return (new_line);
}
