/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:37:38 by jkauker           #+#    #+#             */
/*   Updated: 2024/07/08 12:58:39 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include "cub3d.h"

// ---- PREDEFS

typedef struct s_entity	t_entity;

// ---- UTILS

typedef struct s_color
{
	int	r;
	int	g;
	int	b;
	int	a;
}	t_color;

typedef struct s_scale
{
	int	x;
	int	y;
}	t_scale;

typedef struct s_range
{
	int	min;
	int	max;
}	t_range;

// ---- GAME LOGIC

typedef struct s_vec2
{
	double	x;
	double	y;
}	t_vec2;

typedef struct s_trans
{
	t_vec2	pos;
	t_vec2	rot;
}	t_trans;

typedef struct s_image_data
{
	double			distance;
	mlx_image_t		*img;
	mlx_texture_t	*tex;
}	t_image_data;

typedef struct s_wall_scale
{
	int		x_left;
	int		x_right;
	int		height_left;
	int		height_right;
	char	direction;
}	t_wall_scale;

// ---- IMPORTANT

typedef enum e_tile_type
{
	VOID = -1,
	FLOOR = 0,
	WALL = 1
}	t_tile_type;

typedef struct s_input_data
{
	char		*no_texture_location;
	char		*so_texture_location;
	char		*we_texture_location;
	char		*ea_texture_location;
	char		*sprite_texture_location;
	t_color		floor_color;
	t_color		ceiling_color;
	t_tile_type	***map;
	int			map_width;
	int			map_height;
	t_trans		**walls;
	bool		fog_enabled;
	t_color		fog_color;
	int			fog_intensity;
	bool		show_minimap;
}	t_input_data;

typedef struct s_animation
{
	mlx_texture_t	*frame1;
	mlx_texture_t	*frame2;
	mlx_texture_t	*frame3;
}	t_animation;

typedef struct s_textures
{
	mlx_texture_t	*door;
	mlx_texture_t	*door_open;
	mlx_texture_t	*key;
	mlx_texture_t	*goal;
	mlx_texture_t	*health;
	mlx_texture_t	*health_boss;

	mlx_texture_t	*key_floor;
	mlx_texture_t	*health_floor;

	mlx_texture_t	*water_orb;
	mlx_texture_t	*fire_orb;
	mlx_texture_t	*earth_orb;
	mlx_texture_t	*air_orb;

	mlx_texture_t	*water_orb_floor;
	mlx_texture_t	*fire_orb_floor;
	mlx_texture_t	*earth_orb_floor;
	mlx_texture_t	*air_orb_floor;

	mlx_texture_t	*water_orb_flying;
	mlx_texture_t	*fire_orb_flying;
	mlx_texture_t	*earth_orb_flying;
	mlx_texture_t	*air_orb_flying;

	mlx_texture_t	*air_blight_idle;
	mlx_texture_t	*air_blight_hurt;
	t_animation		air_blight_death;
	t_animation		air_blight_attack;
	mlx_texture_t	*fire_blight_idle;
	mlx_texture_t	*fire_blight_hurt;
	t_animation		fire_blight_death;
	t_animation		fire_blight_attack;
	mlx_texture_t	*water_blight_idle;
	mlx_texture_t	*water_blight_hurt;
	t_animation		water_blight_death;
	t_animation		water_blight_attack;
	mlx_texture_t	*earth_blight_idle;
	mlx_texture_t	*earth_blight_hurt;
	t_animation		earth_blight_death;
	t_animation		earth_blight_attack;

	mlx_texture_t	*hotbar;
	mlx_texture_t	*hotbar_select;

	mlx_texture_t	*elements_overview;
	mlx_texture_t	*hightlight_water;
	mlx_texture_t	*hightlight_fire;
	mlx_texture_t	*hightlight_earth;
	mlx_texture_t	*hightlight_air;

	mlx_texture_t	*elementor_idle;
	mlx_texture_t	*elementor_hurt;

	mlx_texture_t	*explosion_1;
	mlx_texture_t	*explosion_2;
	mlx_texture_t	*explosion_3;
	mlx_texture_t	*explosion_4;
	mlx_texture_t	*explosion_5;
	mlx_texture_t	*explosion_6;
	mlx_texture_t	*explosion_7;
	mlx_texture_t	*explosion_8;
	mlx_texture_t	*explosion_9;
	mlx_texture_t	*explosion_10;
}	t_textures;

# define MAX_TEXTURES 75

typedef struct s_persistent_data
{
	t_input_data	*input_data;
	mlx_t			*mlx;
	mlx_image_t		*background;
	mlx_image_t		*game_scene;
	mlx_image_t		*hud;
	bool			**visible_walls;
	bool			game_over;
	double			minimap_size;
	mlx_texture_t	*no_texture;
	mlx_texture_t	*so_texture;
	mlx_texture_t	*we_texture;
	mlx_texture_t	*ea_texture;
	t_list			*entities;
	mlx_texture_t	*frame_hurt;
	mlx_texture_t	*frame_dead;
	mlx_texture_t	*frame_win;
	mlx_image_t		*screen_effect;
	double			screen_effect_end;
	int32_t			prev_mouse_x;
	double			prev_time;
	t_textures		textures;
	bool			mouse_free;
	mlx_texture_t	*texture_arr[MAX_TEXTURES];
	t_entity		*boss;
}	t_persistent_data;

// --- PLAYER

typedef struct s_inventory
{
	int			num_available_items;
	int			current_index;

	int			keys;
	int			water_orbs;
	int			fire_orbs;
	int			earth_orbs;
	int			air_orbs;

	mlx_image_t	*text_amount_key;
	mlx_image_t	*text_amount_water;
	mlx_image_t	*text_amount_fire;
	mlx_image_t	*text_amount_earth;
	mlx_image_t	*text_amount_air;
}	t_inventory;

typedef struct s_player
{
	t_trans		trans;
	t_trans		spawn_trans;

	int			element;

	int			health;
	int			frames_since_shot;

	t_inventory	inv;
}	t_player;

// ----- ENTITIES

typedef enum e_entity_type
{
	GOAL_NTT,
	DOOR_NTT,
	KEY_NTT,
	ORB_NTT,
	PROJECTILE_NTT,
	BLIGHT_NTT,
	HEALTH_NTT,
	ELEMENTOR_NTT,
	EXPLOSION_NTT
}	t_entity_type;

typedef struct s_entity
{
	t_entity_type	type;
	unsigned int	id;
	bool			to_be_deleted;

	t_trans			trans;
	t_trans			spawn_trans;

	int				health;

	mlx_texture_t	*(*get_texture)(t_entity *self);
	bool			is_billboard;
	unsigned int	frames_since_state_change;

	void			(*tick)(t_entity *self);
	void			(*on_collision)(t_entity *self, t_entity *collider);

	void			*data;
}	t_entity;
// if is_billboard, the entity will always show its full face towards the player

// - DOOR

# define DOOR_STATE_CLOSED 0
# define DOOR_STATE_OPENING 1
# define DOOR_STATE_OPEN 2
# define DOOR_STATE_CLOSING 3

# define DOOR_DIR_VERTICAL 0
# define DOOR_DIR_HORIZONTAL 1

# define DOOR_TYPE_LOCKED 0
# define DOOR_TYPE_UNLOCKED 1

typedef struct s_door
{
	int		state;
	int		type;
	bool	direction;
	t_vec2	open_pos;
	t_vec2	close_pos;
	t_vec2	idle_pos;
	double	door_open_progress;
}	t_door;

// - ORB

typedef struct s_orb
{
	int	element;
}	t_orb;

// - PROJECTILE

typedef struct s_projectile
{
	int	element;
}	t_projectile;

// - BLIGHT

# define BLIGHT_STATE_WALKING 0
# define BLIGHT_STATE_ATTACKING 1
# define BLIGHT_STATE_STANDING 2
# define BLIGHT_STATE_DYING 3

typedef struct s_blight
{
	int		element;
	int		state;
	bool	drops_key;
	int		hurt_state;
}	t_blight;
// once hurt, hurt_state will be set to BLIGHT_HURT_STATE_FRAME_DURATION
// this will count down and the texture will be hurt during that time

// - ELEMENTOR

# define ELEMENTOR_MVMNT_STAND 0
# define ELEMENTOR_MVMNT_WALK 1

typedef struct s_elementor
{
	int		element1;
	int		element2;
	int		element3;

	int		stage;
	int		mvmnt;

	int		animation_frame;
	int		hurt_state;
	int		death_animation;

	int		frames_since_element_switch;
}	t_elementor;

// stage will define which half of the fight were in

#endif