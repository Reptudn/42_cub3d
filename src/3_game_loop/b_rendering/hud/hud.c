/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freddy <freddy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:56:58 by jkauker           #+#    #+#             */
/*   Updated: 2024/07/05 18:51:45 by freddy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3d.h"

void	draw_crosshair(void)
{
	int	size;

	size = 3;
	draw_square(game()->game_scene->width / 2, game()->game_scene->height / 2,
		size, rgba_to_int(255, 255, 255, 255));
	draw_square(game()->game_scene->width / 2 + size, game()->game_scene->height
		/ 2, size, rgba_to_int(255, 255, 255, 255));
	draw_square(game()->game_scene->width / 2, game()->game_scene->height
		/ 2 + size, size, rgba_to_int(255, 255, 255, 255));
	draw_square(game()->game_scene->width / 2 - size,
		game()->game_scene->height / 2, size, rgba_to_int(255, 255, 255, 255));
	draw_square(game()->game_scene->width / 2, game()->game_scene->height
		/ 2 - size, size, rgba_to_int(255, 255, 255, 255));
}

void	draw_elements_overview(void)
{
	t_scale	pos;
	t_scale	size;

	pos.x = game()->mlx->width - ELEMENTS_VIS_RIGHT_OFFSET - \
				game()->textures.elements_overview->width * ELEMENTS_VIS_SCALE;
	pos.y = ELEMENTS_VIS_TOP_OFFSET;
	size.x = game()->textures.elements_overview->width * ELEMENTS_VIS_SCALE;
	size.y = game()->textures.elements_overview->height * ELEMENTS_VIS_SCALE;
	if (player()->element == TYPE_FIRE)
		texture_draw(game()->textures.hightlight_fire, pos, size);
	else if (player()->element == TYPE_WATER)
		texture_draw(game()->textures.hightlight_water, pos, size);
	else if (player()->element == TYPE_EARTH)
		texture_draw(game()->textures.hightlight_earth, pos, size);
	else if (player()->element == TYPE_AIR)
		texture_draw(game()->textures.hightlight_air, pos, size);
	texture_draw(game()->textures.elements_overview, pos, size);
}
