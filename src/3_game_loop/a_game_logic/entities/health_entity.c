/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   health_entity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:11:23 by freddy            #+#    #+#             */
/*   Updated: 2024/07/08 09:48:05 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3d.h"

void	tick_health(t_entity *self)
{
	if (pos_dist(player()->trans.pos, self->trans.pos) > \
					HEALTH_COLLISION_DISTANCE)
		return ;
	logger_v(LOGGER_ACTION, "Health power up picked up!");
	player()->health += random_int(MIN_HEALTH_PICKUP_AMOUNT, \
									MAX_HEALTH_PICKUP_AMOUNT);
	self->to_be_deleted = true;
}

mlx_texture_t	*get_texture_health(t_entity *self)
{
	(void)self;
	return (game()->textures.health_floor);
}
