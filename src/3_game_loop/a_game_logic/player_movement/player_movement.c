/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freddy <freddy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 07:50:27 by fschuber          #+#    #+#             */
/*   Updated: 2024/07/06 20:11:55 by freddy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3d.h"

static inline double	get_mvmnt_speed(void)
{
	double	speed;

	speed = MOVEMENT_SPEED;
	if (mlx_is_key_down(game()->mlx, MLX_KEY_LEFT_SHIFT))
		speed *= MOVEMENT_SPRINT_MULTIPLIER;
	return (speed);
}

// if positive, turn right
void	turn(double degrees)
{
	t_vec2	direction;
	double	cos_angle;
	double	sin_angle;
	t_vec2	new_direction;

	direction = player()->trans.rot;
	cos_angle = cos(degrees * M_PI / 180.0);
	sin_angle = sin(degrees * M_PI / 180.0);
	new_direction.x = direction.x * cos_angle - direction.y * sin_angle;
	new_direction.y = direction.x * sin_angle + direction.y * cos_angle;
	player()->trans.rot = new_direction;
}

static inline t_vec2	get_movement_from_key(double speed, double angle)
{
	t_vec2		mvmnt;

	mvmnt = (t_vec2){0, 0};
	if (mlx_is_key_down(game()->mlx, MLX_KEY_W))
	{
		mvmnt.x += cos(angle) * speed;
		mvmnt.y += sin(angle) * speed;
	}
	if (mlx_is_key_down(game()->mlx, MLX_KEY_A))
	{
		mvmnt.x += sin(angle) * speed;
		mvmnt.y += -cos(angle) * speed;
	}
	if (mlx_is_key_down(game()->mlx, MLX_KEY_S))
	{
		mvmnt.x += -cos(angle) * speed;
		mvmnt.y += -sin(angle) * speed;
	}
	if (mlx_is_key_down(game()->mlx, MLX_KEY_D))
	{
		mvmnt.x += -sin(angle) * speed;
		mvmnt.y += cos(angle) * speed;
	}
	return (mvmnt);
}

void	handle_player_move(void)
{
	t_vec2	mvmnt;
	t_vec2	new_pos;
	double	speed;
	double	angle;

	speed = get_mvmnt_speed();
	angle = deg_to_rad(dir_vec_to_deg(player()->trans.rot));
	mvmnt = get_movement_from_key(speed, angle);
	new_pos.x = player()->trans.pos.x + mvmnt.x * \
				(1 + WALL_COLLISION_MARGIN);
	new_pos.y = player()->trans.pos.y + mvmnt.y * \
				(1 + WALL_COLLISION_MARGIN);
	if (is_position_valid(new_pos.x, player()->trans.pos.y))
		player()->trans.pos.x += mvmnt.x;
	if (is_position_valid(player()->trans.pos.x, new_pos.y))
		player()->trans.pos.y += mvmnt.y;
	if (mlx_is_key_down(game()->mlx, MLX_KEY_LEFT))
		turn(-TURN_SPEED_ARROWS_DEG);
	if (mlx_is_key_down(game()->mlx, MLX_KEY_RIGHT))
		turn(TURN_SPEED_ARROWS_DEG);
}
