/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orb_entity.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freddy <freddy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:42:00 by fschuber          #+#    #+#             */
/*   Updated: 2024/07/07 17:01:29 by freddy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/cub3d.h"

static inline void	gain_ammo(t_entity *self, t_orb *orb)
{
	int	ammo_amount;

	if (orb->element != player()->element)
		ammo_amount = random_int(MIN_AMMO_AMOUNT_PER_ORB, \
								MAX_AMMO_AMOUNT_PER_ORB);
	else
		ammo_amount = random_int(MIN_AMMO_AMOUNT_PER_ORB, \
								MAX_AMMO_AMOUNT_PER_OWN_ELEMENT_ORB);
	if (orb->element == TYPE_EARTH)
		player()->inv.earth_orbs += ammo_amount;
	else if (orb->element == TYPE_FIRE)
		player()->inv.fire_orbs += ammo_amount;
	else if (orb->element == TYPE_WATER)
		player()->inv.water_orbs += ammo_amount;
	else if (orb->element == TYPE_AIR)
		player()->inv.air_orbs += ammo_amount;
	logger_v(LOGGER_ACTION, "Picked up some orbs!");
	self->to_be_deleted = true;
}

static inline void	delete_old_orb_amont_text(t_orb *orb)
{
	if (orb->element == TYPE_EARTH)
	{
		mlx_delete_image(game()->mlx, player()->inv.text_amount_earth);
		player()->inv.text_amount_earth = NULL;
	}
	else if (orb->element == TYPE_FIRE)
	{
		mlx_delete_image(game()->mlx, player()->inv.text_amount_fire);
		player()->inv.text_amount_fire = NULL;
	}
	else if (orb->element == TYPE_WATER)
	{
		mlx_delete_image(game()->mlx, player()->inv.text_amount_water);
		player()->inv.text_amount_water = NULL;
	}
	else if (orb->element == TYPE_AIR)
	{
		mlx_delete_image(game()->mlx, player()->inv.text_amount_air);
		player()->inv.text_amount_air = NULL;
	}
}

void	tick_orb(t_entity *self)
{
	t_orb	*orb;

	orb = (t_orb *)self->data;
	if (pos_dist(player()->trans.pos, self->trans.pos) > \
						GOAL_COLLISION_DISTANCE)
		return ;
	gain_ammo(self, orb);
	delete_old_orb_amont_text(orb);
}

mlx_texture_t	*get_texture_orb(t_entity *self)
{
	if (((t_blight *)self->data)->element == TYPE_FIRE)
		return (game()->textures.fire_orb_floor);
	else if (((t_blight *)self->data)->element == TYPE_AIR)
		return (game()->textures.air_orb_floor);
	else if (((t_blight *)self->data)->element == TYPE_WATER)
		return (game()->textures.water_orb_floor);
	else if (((t_blight *)self->data)->element == TYPE_EARTH)
		return (game()->textures.earth_orb_floor);
	return (NULL);
}
