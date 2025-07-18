/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:13:59 by jkauker           #+#    #+#             */
/*   Updated: 2024/07/02 10:59:46 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3d.h"

bool	free_split(char	**split, bool ret)
{
	int	i;

	i = -1;
	if (!split)
		return (ret);
	while (split[++i])
	{
		free(split[i]);
		split[i] = NULL;
	}
	free(split);
	split = NULL;
	return (ret);
}

int	split_len(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (0);
	while (split[i])
		i++;
	return (i);
}

bool	char_is_in(char c, char *seq)
{
	int	i;

	if (!seq)
		return (false);
	i = -1;
	while (seq[++i])
		if (c == seq[i])
			return (true);
	return (false);
}

bool	regex(char *line, char *reg)
{
	int	i;

	if (!line || !reg || !*line || !*reg)
		return (false);
	i = -1;
	while (line[++i])
		if (!char_is_in(line[i], reg))
			return (false);
	return (true);
}

int	get_map_len(int *i, char **data)
{
	int	map_len;

	map_len = 0;
	while (data[(*i) + map_len] && regex(data[(*i) + map_len], MAP_TILES))
		map_len++;
	return (map_len);
}
