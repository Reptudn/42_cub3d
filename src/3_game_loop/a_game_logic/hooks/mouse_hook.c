/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freddy <freddy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:50:17 by freddy            #+#    #+#             */
/*   Updated: 2024/07/06 20:17:01 by freddy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/cub3d.h"

void	handle_mouse_mv(void)
{
	int32_t	current_mouse_x;
	int32_t	current_mouse_y;

	mlx_get_mouse_pos(game()->mlx, &current_mouse_x, &current_mouse_y);
	if (current_mouse_x == game()->prev_mouse_x)
		return ;
	turn((current_mouse_x - game()->prev_mouse_x) * MOUSE_SENSITIVITY);
	game()->prev_mouse_x = current_mouse_x;
	if (game()->mouse_free)
	{
		mlx_set_mouse_pos(game()->mlx, game()->mlx->width / 2, \
								game()->mlx->height / 2);
		game()->prev_mouse_x = game()->mlx->width / 2;
	}
}

void	scroll_hook(double xdelta, double ydelta, void *param)
{
	(void)param;
	(void)xdelta;
	if (ydelta != 0)
	{
		if (ydelta > 0)
			cycle_inventory(-1, false);
		else
			cycle_inventory(1, false);
	}
}

void	player_shoot(void)
{
	mlx_image_t		**amount_text;
	t_trans			trans;
	int				*amount;

	if (TICKS_BETWEEN_PLAYER_SHOTS > player()->frames_since_shot)
		return ;
	amount = get_amount_of_item(player()->inv.current_index);
	if (player()->inv.current_index == 0 || *amount <= 0)
		return ;
	player()->frames_since_shot = 0;
	amount_text = get_amount_text_by_index(player()->inv.current_index);
	trans = player()->trans;
	trans.rot = scale_vector(trans.rot, 1);
	trans.pos.x += trans.rot.x * (DEFAULT_COLLISION_DISTANCE * 1.05);
	trans.pos.y += trans.rot.y * (DEFAULT_COLLISION_DISTANCE * 1.05);
	shooooot(trans, player()->inv.current_index - 1);
	(*amount)--;
	mlx_delete_image(game()->mlx, *amount_text);
	*amount_text = NULL;
	logger_v(LOGGER_ACTION, "Shot projectile!");
}

void	mouse_click_hook(mouse_key_t button, action_t action, \
			modifier_key_t mods, void *param)
{
	(void)param;
	(void)mods;
	if (button == MLX_MOUSE_BUTTON_LEFT && action == MLX_PRESS)
		player_shoot();
}
