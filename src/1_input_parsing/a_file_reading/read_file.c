/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freddy <freddy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:38:30 by fschuber          #+#    #+#             */
/*   Updated: 2024/07/07 16:16:44 by freddy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3d.h"

static void	read_file_loop(char ***data, int file)
{
	char	*line;
	int		i;

	line = get_next_line(file);
	i = 0;
	while (line)
	{
		if (*line == '#')
		{
			free(line);
			line = get_next_line(file);
			continue ;
		}
		(*data)[i++] = line;
		gc_append_element(line);
		if ((*data)[i - 1][ft_strlen((*data)[i -1]) - 1] == '\n')
			(*data)[i - 1][ft_strlen((*data)[i -1]) - 1] = 0;
		line = get_next_line(file);
	}
}

static char	**read_file(char *filename)
{
	char	**data;
	int		file;
	int		length;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		logger(LOGGER_ERROR, "Could not open map file!");
		return (NULL);
	}
	length = get_file_length(filename);
	data = gc_malloc((length + 2) * sizeof(char *));
	if (!data)
	{
		close(file);
		return (NULL);
	}
	read_file_loop(&data, file);
	get_next_line(-1);
	close(file);
	return (data);
}

static bool	parse_file_data(char **data, t_input_data **input_data)
{
	int	i;

	i = 0;
	if (!parse_attributes(data, input_data, &i) || !data)
	{
		logger(LOGGER_ERROR, "Could not parse attributes!");
		return (false);
	}
	while (i > -1 && (data && data[i] && !(regex(data[i], MAP_TILES))))
		i++;
	if (i == -1 || !parse_map(data, input_data, &i) || !data)
	{
		logger(LOGGER_ERROR, "Could not parse playing field!");
		return (false);
	}
	return (true);
}

bool	basic_validate(t_input_data **in)
{
	bool	invalid;

	invalid = false;
	if (!in || !(*in))
		return (false);
	if ((*in)->ceiling_color.r == -1 || (*in)->ceiling_color.g == -1
		|| (*in)->ceiling_color.b == -1)
	{
		logger(LOGGER_ERROR, "Ceiling color not set!");
		invalid = true;
	}
	if ((*in)->floor_color.r == -1 || (*in)->floor_color.g == -1
		|| (*in)->floor_color.b == -1)
	{
		logger(LOGGER_ERROR, "Floor color not set!");
		invalid = true;
	}
	if (!(*in)->ea_texture_location || !(*in)->no_texture_location
		|| !(*in)->so_texture_location || !(*in)->we_texture_location)
	{
		logger(LOGGER_ERROR, "Texture location not set!");
		invalid = true;
	}
	return (check_player(&invalid));
}

void	get_map_contents(char *filepath)
{
	t_input_data	*input_data;
	char			**data;

	data = read_file(filepath);
	if (!data)
		cub_exit("Could not read map file!", -1);
	input_data = gc_malloc(sizeof(t_input_data));
	if (!input_data)
		cub_exit("Could not allocate memory for input data!", -1);
	input_data->ceiling_color = (t_color){-1, -1, -1, -1};
	input_data->floor_color = (t_color){-1, -1, -1, -1};
	input_data->ea_texture_location = NULL;
	input_data->no_texture_location = NULL;
	input_data->so_texture_location = NULL;
	input_data->we_texture_location = NULL;
	input_data->map = NULL;
	input_data->show_minimap = true;
	input_data->fog_enabled = false;
	if (!parse_file_data(data, &input_data))
		cub_exit("Could not parse map data!", -1);
	if (!basic_validate(&input_data))
		cub_exit("Basic validation failed!", -1);
	game()->input_data = input_data;
}
