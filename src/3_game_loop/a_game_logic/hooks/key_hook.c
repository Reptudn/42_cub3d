/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:23:50 by freddy            #+#    #+#             */
/*   Updated: 2024/07/10 10:23:57 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/cub3d.h"

static inline void	inventory_press(mlx_key_data_t keydata)
{
	if (keydata.key >= MLX_KEY_1 && keydata.key <= MLX_KEY_9 \
					&& keydata.action == MLX_PRESS)
	{
		if ((unsigned int)(player()->inv.num_available_items) > \
					keydata.key - MLX_KEY_1)
			player()->inv.current_index = keydata.key - MLX_KEY_1;
	}
}

void	key_hook(mlx_key_data_t keydata, void *param)
{
	if (keydata.key == MLX_KEY_ESCAPE)
		cub_exit("ESCAPE received, exiting...", -1);
	else if (keydata.key == MLX_KEY_ENTER && keydata.action == MLX_PRESS)
	{
		game()->mouse_free = !game()->mouse_free;
		update_mouse_visibility();
	}
	else if (keydata.key == MLX_KEY_PERIOD)
		save_game();
	else if (keydata.key == MLX_KEY_F && keydata.action == MLX_PRESS)
		player_shoot();
	else if (keydata.key == MLX_KEY_R && keydata.action == MLX_PRESS)
	{
		player()->trans.pos.x = player()->spawn_trans.pos.x + 0.5;
		player()->trans.pos.y = player()->spawn_trans.pos.y + 0.5;
		player()->trans.rot.x = player()->spawn_trans.rot.x;
		player()->trans.rot.y = player()->spawn_trans.rot.y;
	}
	if (mlx_is_key_down(game()->mlx, MLX_KEY_C) && \
			mlx_is_key_down(game()->mlx, MLX_KEY_LEFT_CONTROL))
		cub_exit("Control + C received, exiting...", 214);
	inventory_press(keydata);
	(void) param;
}
