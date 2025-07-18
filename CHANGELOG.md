# Changelog

### [1.0.5] - 11.07.2024
- Added a table of contents
- broken rendering gif wrong URL fix

### [1.0.4] - 11.07.2024
- Further readme improvements
- Added a screenshot when starting up the program & and a screenshot to show off one of the randomly generated maps
- Added a bunch more images for less boringness

### [1.0.3] - 11.07.2024
- Centered youtube link
- Added a door gif, and increased gif sizes

### [1.0.2] - 11.07.2024
- Added a bunch of nice gameplay gifs. Hopefully theyre aligned correctly when viewed on github
- Also added an updated Youtube Video link image texture

### [1.0.1] - 10.07.2024
- Wrote A LOT into the Readme.

## [1.0.0] - 10.07.2024
- README additions
- Fixed R not resetting position but also clearing keys from inventory etc
- Blight Key dropping changes
- Project no longer norminette conformant

> [!IMPORTANT]
> Project was handed in, with full points! We did it.

### [0.26.21] - 06.07.2024
- Self-opening doors

### [0.26.21] - 06.07.2024
- Better balancing
- Boss-spawned enemies are no longer permanently red

### [0.26.20] - 06.07.2024
- Some uninitialized value fixes
- Rebalancing. Game is easier now.

### [0.26.19] - 06.07.2024
- Fixed elementor summoned blights not moving
- Various map fixes
- Fix color switch up after time issue.
- Made the last 5 hitpoints of boss go down 1 by 1 whatever projectile you shoot, to make it extra tense. And so everybody gets to see the boss at 1 heart and shoot the final shot. It's very anticlimactic to have the boss at 2 hearts, shoot 1 bullet and it kills him. Boss also doesn't really shoot badly anymore in the last 5 health, so you're not sad because it was close it's supposed to feel clutch aight

### [0.26.18] - 06.07.2024
- Improved goal placement

### [0.26.17] - 06.07.2024
- Made players gain more orbs when picking up orbs of their element
- Various fixes and changes

### [0.26.16] - 06.07.2024
- Made an option to hide the minimap. Added that to a couple campaign maps

### [0.26.15] - 06.07.2024
- Fog
- Elementor shooting with invalid projectile leading to drawing segfault because no valid texture can be found fix
- Made goal reached screen leave again

### [0.26.14] - 06.07.2024
- Added a nice template map to explain all of the things you can put in a given map

### [0.26.13] - 06.07.2024
- Norminettification, again
- Various fixes
- Renamed transform to trans

### [0.26.12] - 06.07.2024
- Made boss stay near its spawn, thus it doesnt get stuck in its map
- Made boss health bar scale up the less there is
- Better enemy spawning balancing

### [0.26.11] - 06.07.2024
- Made elementor stop spawning enemies in walls
- Various rebalancings. Enemies now get spawned more often but only one at a time.

### [0.26.10] - 06.07.2024
- Added spin & summon attacks
- A lot of fixes & rebalancings
- Added map overview script which prints out how many of what element are in a given map, used that to make sure no blight type or orb type is there unproportionally. There is 1 more earth blight than anything else in the campaign in total.

### [0.26.9] - 05.07.2024
- Map reworks & elementors domain map
- Various rebalancings
- Fixed getting to the goal leading to an incorrect return code

### [0.26.8] - 05.07.2024
- boss drops health
- Added explosion which gets triggered after the boss is dead

### [0.26.6] - 05.07.2024
- Made elementor killable & Added a really nice death animation
- Added some cool voice messages
- Little write warning fix

### [0.26.5] - 05.07.2024
- Made elementor switch their type after a while so you don't get softlocked
- Added a nice black outline around the element you've selected in the element overview in the top right
- Fixed command line input for element choice allowing to choose an invalid value

### [0.26.4] - 05.07.2024
- Made elementor damageable
- Added a boss health bar

### [0.26.3] - 05.07.2024
- Added a basic attack
- Added a nice method to shuffle up the elementor selected elements

### [0.26.2] - 05.07.2024
- Gave boss a rotating animation when in second phase

### [0.26.1] - 05.07.2024
- Made elementor texture square & made it display in-game
- Made elementor cloak color change dynamically based on selected element

## [0.26.0] - 04.07.2024
- elementor implementation, basic elementor movement. hes currently a door

### [0.25.11] - 04.07.2024
- Some minor efficiency improvements in draw_walls_entities.c, nothing major

### [0.25.10] - 04.07.2024
- Added some very nice timing setup, should be nicely expandable in the future.

### [0.25.9] - 04.07.2024
- Blight hurt animation duration handling improvements
- Shots per second limit

### [0.25.8] - 04.07.2024
- Showing cursor when mouse is uncaptured, hiding it if it is

### [0.25.7] - 04.07.2024
- Fixed player being able to keep blight stuck in dying animation by continuously shooting projectiles at it while its dying

### [0.25.6] - 04.07.2024
- Improved goal placement in random gen.
	- Removed non-locked positioning bug
	- Placed goal randomly instead of just looping through and placing it at the first viable spot, making the placement have a huge bias towards north-west
- various map gen rebalancings & general settings.h messarounds
- fixed blights death animation starting at pretty much random points

### [0.25.5] - 04.07.2024
- Added elements visualization, which are really helpful

### [0.25.4] - 04.07.2024
- Blight hurt texture animation
- Map Gen rebalancing
- MADE play_campaign.sh take an optionalnumber parameter to skip the first x elements

### [0.25.3] - 04.07.2024
- Fixed some norm error stuff

### [0.25.2] - 04.07.2024
- Improved minimap player indicator coloring
- Fixed player having pretty much random rotation at start depending on where mouse is by saving the intiial position at the start
- You can now press ENTER to toggle mouse capturedness.

### [0.25.1] - 04.07.2024
- Better smaller entities - just more pngs. simple, but works, games small-scale anyways
- Some fixes to rendering

## [0.25.0] - 03.07.2024
- Terrible first attempt at implementing smaller entities

### [0.24.7] - 03.07.2024
- Made blights damage you if you are close to them

### [0.24.6] - 03.07.2024
- Added hit blight textures

### [0.24.5] - 03.07.2024
- Made blights drop orbs upon death
- Fixed exiting segfault when window isnt launched yet

### [0.24.4] - 03.07.2024
- Added saving & loading of game data.
- Various smaller fixes

### [0.24.3] - 03.07.2024
- Removed super unnecessary logging (now only logs when verbose)
- Made it possible to write a lil story into the map files which will get printed before things run

### [0.24.2] - 02.07.2024
- Reworked the coloseum a bit, making it longer and more interesting
- Added play_campaign.sh to play the campaign in its totality

### [0.24.1] - 02.07.2024
- Made window capture mouse pos, now you can turn infinitely in one direction, very pleasant change

## [0.24.0] - 02.07.2024
- Added 5 campaign levels
- Added key-dropping blights
- Made picking up a second key refresh the inventory display

### [0.23.23] - 02.07.2024
- Fixed doors being incorrectly rotated
- Added health drops in random gen maps

### [0.23.22] - 02.07.2024
- Project now fully norminettified

### [0.23.21] - 02.07.2024
- input parsing norminettification

### [0.23.20] - 02.07.2024
- hud norminettification, rnadom fixed

### [0.23.19] - 02.07.2024
- removed minecraft hearts, they are unused
- lil writing segfault fix
- made doors delete themselves once opened

### [0.23.18] - 01.07.2024 - Freddy
- Norminettified walls & entities drawing

### [0.23.17] - 01.07.2024 - Freddy
- Norminettification of game loop hooks, now a_game_logic is fully norminettified

### [0.23.16] - 01.07.2024 - Freddy
- Norminettification of the entities folder

### [0.23.15] - 01.07.2024 - Freddy
- Fixed left-clicking when key held segfaulting
- Added a max hearts amount to avoid segfaulting

### [0.23.14] - 01.07.2024 - Freddy
- Removed github workflows, they weren't working anyways
- Removed <float.h> from the project, norminette didnt like it
- Header norminettification

### [0.23.13] - 01.07.2024 - Freddy
- Various fixes & cleanups

### [0.23.12] - 01.07.2024 - Freddy
- Moved the view rotation using arrow keys over to the loop hook, allowing for much smoother turning
- Made it possible to shoot pressing F as wel

### [0.23.11] - 01.07.2024 - Freddy
- Fixed projectiles shooting through doors

### [0.23.10] - 01.07.2024 - Freddy
- Removed held item drawing
- Key gen infinite loop fix
- Norminettification of 0_maze_gen

### [0.23.9] - 01.07.2024 - Freddy
- Added key to maze gen

### [0.23.8] - 30.06.2024 - Freddy
- Fixed mapmaker segfaulting & generating invalid maps (im pretty sure its hard to prove)

### [0.23.7] - 29.06.2024 - Freddy
- Fixed the players bullets damaging the player by
	- Increasing bullet speed (so player can't run faster when sprinting)
	- Making bullets spawn in front of player instead of at same pos
- Added half & full heart gui textures to project, not yet used though
- Added time to logging

### [0.23.6] - 29.06.2024 - Freddy
- Made player input segment where players can pick their element themselves

### [0.23.5] - 29.06.2024 - Freddy
- Added health entity to heal player when picked up
- Renamed type (as in element) to element, since previously "type" in the context of entities could mean both the entity type and the elemental type

### [0.23.4] - 29.06.2024 - Freddy
- Made player killable, which just quits the program
- Gave player a random elemental type at start

### [0.23.3] - 29.06.2024 - Freddy
- Blight health, don't take damage from their own projectiles, take little damage from random projectiles, instantly die from their major projectile (e.g. water / fire)

### [0.23.2] - 28.06.2024 - Freddy
- Goal placement in randomly generated maps
- Made orbs drop random amounts of new ammo

### [0.23.1] - 28.06.2024 - Freddy
- Reworked mapmaker, clearer now
	- Maze segfault fix
- Made max room size relative to total generated map size so rooms dont take up all of the map
- Math min & max utils

## [0.23.0] - 28.06.2024 - Freddy
- Better goal texture
- Readded map maker functionality
- tick entity segfaulting if there are no entities fix

### [0.22.12] - 28.06.2024 - Freddy
- Blights not properly shooting at you if youre not looking at you fix (Calculated shooting angle based on rot not pos)
- BLIGHT_SHOOTING_INACCURACY_DEG to modify shooting accuracy of a blight

### [0.22.11] - 28.06.2024 - Freddy
- Norminettification & Unnecessities removal
	- util/
	- gc.c
	- 0_texture_init/
	- 1_input_parsing/ (partly)

### [0.22.10] - 28.06.2024 - Freddy
- Removed mark dirty system, it's quite unnecessary at this point anyways.

### [0.22.9] - 28.06.2024 - Freddy
- Fixed blight entity creating stack overflow when infinitely rotating stuck blight enitty

### [0.22.8] - 28.06.2024 - Freddy
- Made entities use normal malloc instead of gc_malloc (otherwise any created entity would stay in the gc forever)
- Entities now just get cleaned up when leaving using gc_exit

### [0.22.7] - 28.06.2024 - Freddy
- Random cleanups
- Entity type renaming
- assets directory sorting
	- execute_cub3d update
	- changed all maps a little
- having too many goals is no longer considered invalid, so i removed that map

### [0.22.6] - 27.06.2024 - Freddy
- Added enemy attacking & enemy attack animation
- Collision check improvements

### [0.22.5] - 27.06.2024 - Freddy
- Dynamic texture animation reworks
- Implemented blight death animations

### [0.22.4] - 27.06.2024 - Freddy
- Dynamic texture application - now, entities dont have a single static texture, but a dynamic texture retrieved using a per-entity get_texture function to allow for dynamic textures (and animated sprites)

### [0.22.3] - 27.06.2024 - Freddy
- Added a texture loading functionality. Now all needed textures are loaded at the very start, and then never again

### [0.22.2] - 27.06.2024 - Freddy - `47-enhanced-entity-rendering`
- Fixed it! Now, proper entity rendering.
- Slight movement tweaks

### [0.22.1] - 27.06.2024 - Freddy - `47-enhanced-entity-rendering`
- Entities now render in correct order but sometimes theres holes in them.
- Enhanced logging

## [0.22.0] - 27.06.2024 - Freddy - `47-enhanced-entity-rendering`
- Made entities render behind each other. It works well, except they are not properly sorted, so they don't render in order.

### [0.21.8] - 27.06.2024 - Freddy - `45-enemies`
- Some balancing, now adding three charges to inventory per orb pickup
- Added air, earth and water blight
- Better logging

### [0.21.7] - 27.06.2024 - Freddy - `45-enemies`
- Functional collision system with killing blights
- Implemented x beats x method in a simple function
- Fixed incorrect projectile entity setup
- Made correct projectiles kill the correct blight

### [0.21.6] - 27.06.2024 - Freddy - `45-enemies`
- Improved blight movement system. They will stand, walk, and never go too far away from their spawn.

### [0.21.5] - 27.06.2024 - Freddy - `45-enemies`
- Significantly improved randomness functions, should now return more diverse random values
- Blights now properly walk in different directions

### [0.21.4] - 26.06.2024 - Freddy - `45-enemies`
- Proper entity correct position validation check
- Enemy still just moves into a wall though

### [0.21.3] - 26.06.2024 - Freddy - `45-enemies`
- Added blights (they don't work yet - i cant see them.) They should move around randomly though.
- Added simple randomness setup
- Fixed projectiles getting stuck in walls because game not set dirty issue
- Various improvementx & assets file sorting

### [0.21.2] - 26.06.2024 - Freddy - `45-enemies`
- Patched up some issues
- Added water orb & earth orb textures. They are substantially worse as I've made them myself and haven't stolen them from minecraft.

### [0.21.1] - 26.06.2024 - Freddy - `45-enemies`
- Proper projectile shooting using mouse hook
- moving projectiles
- entity id system & improved entity deletion

## [0.21.0] - 26.06.2024 - Freddy - `45-enemies`
- Added air orb & fire orb textures
- Added orb entities which can be picked up into inventory

### [0.20.8] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Made minimap wall color white if the floor color is pretty dark to ensure contrast

### [0.20.7] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Removed overly excessive raycast walls efficiency logging
- Commented out Frame Skipped logging
- Removed unnecessary wall / door collision logging

### [0.20.6] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Minimap visual improvements
	- Made voids render like walls to hide the behind-the-scenes optimizations
	- Made minimap floor color take the map inputted floor color

### [0.20.5] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Merging cleanup, minimap movement, rendering system proper inclusion

### [0.20.4] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Very minor final efficiency improvements

### [0.20.4] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Vastly improved draw_walls/draw_column speed using corrected y check, previous commit was erroneous

### [0.20.3] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Even more extensive & epic performance logging in calc_walls, even differentiating between time spent calculating and time spent drawing
	- drawing takes up like 95% of each frame.
- Some minor draw walls efficiency improvements

### [0.20.2] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Added insanely long detailed and elaborate raycast_walls logging, which has led to absolutely no new information gained.

### [0.20.1] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Further minor raycasting logic efficiency improvements

## [0.20.0] - 26.06.2024 - Freddy - `43-raycasting-efficiency`
- Removed annoying logging stuff
- Minor raycasting efficiency improvements

### [0.19.10] - 25.06.2024 - Freddy - `40-doors`
- Nice door sliding open animation.
- Goals of this branch are done, it's mergin' time.

### [0.19.9] - 25.06.2024 - Freddy - `40-doors`
- Added small key entities, which can be collected and will be added to a player inventory
- Made doors openable, they open automatically when a key is held

### [0.19.8] - 25.06.2024 - Freddy - `40-doors`
- Fixed doors not being recognized as valid map parts
- Made it impossible to walk through doors (that are locked)
- better door macro naming
- Made doors non-billboard

### [0.19.7] - 25.06.2024 - Freddy - `40-doors`
- Added doors which dont get properly added yet.
- Added a nice data field in t_entity, allowing for some dynamic content based on the entity, e.g. t_door
- Added nice explanatory comment in cub3d.h to explain all the chars that are accepted in the map format
- Removed max goal count
- Doors dont work yet

### [0.19.6] - 25.06.2024 - Freddy - `40-doors`
- Created t_player struct seperate from t_entity as there are starting to be a lot of fields in t_entity the player won't need.
- Made cub_exit not use the logger error prefix when a success exit code is passed
- Added door texture (minecraft iron trapdoor)
- Added goals to every map

### [0.19.5] - 25.06.2024 - Freddy - `40-doors`
- Added tick method to entity structs which gets called every frame
- Goal now works. If you walk into it, a happy message logs & the program quits
- Reworked exit functions to pass an exit code to allow for an intended exit

### [0.19.4] - 25.06.2024 - Freddy - `40-doors`
- Added RENDER_ENTITIES_THROUGH_WALLS as a debug macro
- fixed up get_face_vector functionality, entity rendering should be a done deal for now.

### [0.19.3] - 24.06.2024 - Freddy - `40-doors`
- Fixed entity fisheye
- Some adjustments

### [0.19.2] - 24.06.2024 - Freddy - `40-doors`
- Various changes and fixes to entity rendering
- is_billboard entity functionality, will later be useful for walls

### [0.19.1] - 24.06.2024 - Freddy - `40-doors`
- Dysfunctional asan fix
- Full reimplementation of entity to the point we had it up until version 0.17.0; Texture still rotates peculiarly

## [0.19.0] - 24.06.2024 - Freddy - `40-doors`
- Half - reimplementation of entities. Currently not functional at all

## [0.18.0] - 23.06.2024 - Freddy - `39-alternative-fisheye-approach`
- Removed claustrophobia.cub, it's a bad map where you just stand.
- Attempted ray angle fisheye correction, not yet working
- Removed old fisheye correction functionality

### [0.17.5] - 22.06.2024 - Freddy
- Removed problem_maps folder (that map isn't a problem anymore)
- Made maps that only have one space to walk in have more stuff going on. (Those are boring)

### [0.17.4] - 22.06.2024 - Freddy
- Slight map printing player rotation display fix (was previously shifted to the right by 2.5°)
- Fixed weird_images.cub not being recognized as valid as it contained non-square textures. Created new non_square_textures.cub map in invalid_maps
- normalize_degrees function efficiency enhancements

### [0.17.4] - 22.06.2024 - Freddy
- Fixed wall flickering by allowing for slight floating point imprecision in draw_walls/util/get_wall_from_intersect
- Removed has_decimals() and math.c util

### [0.17.3] - 21.06.2024 - Freddy
- Wall flickering reduction

### [0.17.2] - 21.06.2024 - Freddy
- Required textures to be square, reducing time spent drawing.
- wall margin system

### [0.17.1] - 21.06.2024 - Freddy
- Simple mark dirty system, no drawing necessary if nothing changed. (dirty = something state, currently rendered state is inaccurate.)
- MARK_DIRTY_LOGGING macro for dirtiness debugging

## [0.17.0] - 21.06.2024 - Freddy
- Removed maze generator & entities

### [0.16.5] - 10.06.2024 - Freddy
- Made walls square
- Removed all multiplayer traces
- player movement improvement when multiple keys are held & better logic update

### [0.16.4] - 10.06.2024 - Freddy
- Added star entity sprite & set it as goal texture
- Removed render being called outside of loop hook segfault
- Made renderer support transparency (transparent texture pixels wont be placed, thus not overriding the image, thus not making the walls behind invisible)

### [0.16.3] - 10.06.2024 - Freddy
- Merge 21 with master
- Made entities & walls use the same calc & drawing functions in step 2 & 3. Now that we need a name for both walls and entities together, I have dubbed them "gameobjects".
- A lot of reorderings
- This branch is highly unstable and segfaults often, yet I'll push it because the amount of changes are large. Look away kids, don't do as I do...

### [0.16.2] - 10.06.2024 - Freddy - `21-image-distortion`
- Fully reworked rendering system, second of two halves.
- Slight drawing & draw calc logic tweaks for simplicity
- Unnecessary print removal

### [0.16.1] - 10.06.2024 - Freddy - `21-image-distortion`
- Full rework of rendering system, first half
- Removed some old unnecessary functions

## [0.16.0] - 20.06.2024 - Freddy - `21-image-distortion`
- fully removed draw wall function and get color function - it's no longer needed
- moved rgba_to_int to color utils where it belongs
- various cleanups

### [0.15.1] - 19.06.2024 - Freddy - `34-better-player-movement`
- cleaned up unnecessary old code form key_hook

## [0.15.0] - 19.06.2024 - Freddy - `34-better-player-movement`
- Fixed player movement segfault

### [0.14.2] - 19.06.2024 - Freddy - `33-rendering-improvements`
- Wall distortion fix. I have fixed it by deciding we won't allow dynamically changing the FOV (which is totally fine), thus not forcing me to make the wall scaling work properly on anything but one FOV

### [0.14.1] - 19.06.2024 - Freddy - `33-rendering-improvements`
- Fixed rounding error causing the transparent stripe to the right issue in get_x_pixel_from_ray_index in 2_calc_walls_entities.c

## [0.14.0] - 19.06.2024 - Freddy - `33-rendering-improvements`
- peculiar condition fix, used & instead of && in raycast_walls. shouldn't actually change anything, but more readable & less confusing now
- minor fisheye fixes
- Made FOV 70, a more reasonable number than 96, we're not doing Minecraft PvP here.
- gotta switch pcs

## [0.13.3] - 14.06.2024 - Freddy - `31-entities`
- proper entity placement & rendering
- moved a lot of stuff around

### [0.13.2] - 14.06.2024 - Freddy - `31-entities`
- theoretical rendering, but not working yet
- reworked and renamed window resizing hook file

### [0.13.1] - 14.06.2024 - Freddy - `31-entities`
- get_face_vector function
- various renamings & fixes

## [0.13.0] - 14.06.2024 - Freddy - `31-entities`
- added goal option to map which gets read by parser & added to new entity list
- general cleanup
- minor map changes

### [0.12.6] - 13.06.2024 - Freddy
- Fixed player resetting improperly when pressing r

### [0.12.5] - 13.06.2024 - Jonas
- player now spawns correctly in the middle of a tile and not on the top left edge
  -> that also fixed the walls not rendering on spawn
- fov has to be the screen width / 10 for it not to be cut off

### [0.12.5] - 13.06.2024 - Jonas - `walls_with_raycasting`
- fixed execute_cub3d.sh showing maps failed and success the wrong way around

### [0.12.4] - 13.06.2024 - Freddy - `walls_with_raycasting`
- map gen fixes
- readded player collisions & made x and y checks seperate to allow for wall hugging
- various tweaks

### [0.12.3] - 13.06.2024 - Freddy - `walls_with_raycasting`
- Removed fisheye effect

### [0.12.2] - 13.06.2024 - Freddy - `walls_with_raycasting`
- functional colored walls

### [0.12.1] - 13.06.2024 - Freddy - `walls_with_raycasting`
- nice rendering logging
- fixes: now full width & at least two colors

## [0.12.0] - 13.06.2024 - Freddy - `walls_with_raycasting`
- removed old rendering code, added new dysfunctional raycasting rendering code

### [0.11.9] - 12.06.2024 - Jonas && Freddy
- refined terminal map

### [0.11.8] - 12.06.2024 - Freddy
- various rendering fixes
- very solid printing

### [0.11.7] - 12.06.2024 - Freddy
- Made WASD keys properly move you in the expected directions
- Added standing_simulator.cub, a simple single space

### [0.11.6] - 11.06.2024 - Freddy
- removed scroll to pan view functionality, added mouse x position tracking
- added fps functionality to limit frames & warn if a frame was skipped

### [0.11.5] - 11.06.2024 - Jonas
- fixed player rotation not working naturally when pressing arrow keys
- fixed terminal map showing wrong player dir

### [0.11.3] - 11.06.2024 - Freddy
- switched walls in scale walls properly

### [0.11.2] - 11.06.2024 - Freddy
- various fixes
- ensured proper wall sorting order

### [0.11.1] - 11.06.2024 - Freddy - `23-better-rendering`
- commented out raycasting, now just drawing all walls, that makes it work a lot better for some reason.
- closing branch to keep working on master

## [0.11.0] - 07.06.2024 - Freddy - `23-better-rendering`
- updated angle_to_screen_x and angle_to_wall_height functions. it seems better, but still sort of - huh?
- minor maps fixes

### [0.10.24] - Jonas
- Fixed parsing errors
- made the map testing script better

### [0.10.23] - 07.06.2024 - Freddy - `23-better-rendering`
- Instead of manually editing the image data, we now use the provided mlx_put_pixel function, which does seem to fix some issues.

### [0.10.22] - 07.06.2024 - Freddy & Jonas
- Fixed gc seg fault.

### [0.10.21] - 07.06.2024 - Freddy
- Added Apple map

### [0.10.20] - 07.06.2024 - Jonas
- added amogus 🐔

### [0.10.19] - 07.06.2024 - Freddy
- Added execute_cub3d.sh, which allows you to pick what maps you want to choose and whether to execute all or a random one. it also features a lot of emojis and colors, thus clearly epic.
	- removed random map and random invalid map, now unnecessary
- Made sort walls sort the walls in the right order, descending not ascending

### [0.10.18] - 07.06.2024 - Freddy
- Small fix to wall drawing, now if left x coord is larger then right they get switched before starting drawing execution
- renamed png_to_map to xpm_to_map, which is actually correct
- various changes & fixes

### [0.10.17] - 07.06.2024 - Freddy
- Fixed player often spawning in walls because player coords defined in parse.c/make_map passed to set_values.c/set_player_spawn were switched
- made rng in mapmaker util use /dev/urandom instead or /dev/random
- fixed floating point exception in mapmaker rng
- mapmaker norminettifications, removal of fprintf statements

### [0.10.16] - 07.06.2024 - Freddy
- Added mario.cub, a recreation of smb1-1 as cub format

### [0.10.15] - 06.06.2024 - Freddy
- automatically importing submodules doesnt work yet because submodule folders are cloned but not filled, which makes the check not work. added a new check which runs ls in the directories and runs the submodule command if the ls command prints something
- very annoying you cant test this without pushing a commit

### [0.10.14] - 06.06.2024 - Freddy
- made makefile automatically run setup when submodules arent installed. this should work.

### [0.10.13] - 06.06.2024 - Freddy
- Made all the draw walls stuff not malloc anything - which should improve performance greatly
	- Now the testing rectangle seems to render, and nothing else anymore, whats going on?
- Fixed some maps not having a proper spawn point
- map generator placing player in 1 sized space fix, this is because random walls were removed before setting the player, so bad luck can sometimes make you spawn trapped, now player gets set first and doesn't get overriden by either remove random walls or add rooms
- fixed map making macro misnaming & added room size changing macros

### [0.10.12] - 06.06.2024 - Freddy
- Added 12 more maps, some my own, some credited, to test various aspects
- Added invalid_maps to test parsing, very hard. Already found a segfault. For now just maps, no parser changes yet

### [0.10.11] - 06.06.2024 - Freddy
- Removed various unwanted chars from the maps which would cause parsing errors, through the help of misc/char_overview.sh, which lists amounts of each char in file

### [0.10.10] - 06.06.2024 - Freddy
- added step logging type & logging statements all over the program. now we clearly know where something broke if something broke
- removed premade walls - they are thoroughly unnecessary now that we have integrated the map generator into the main program
- fixed weird letters in zelda.cub
- removed unnecessary logging in general
- made map creator not leak literally every allocated byte by using garbage collector, fully removed mapmaker cleanup function
- made mapmaker not log map, it will be logged out soon enogh afterwards

### [0.10.9] - 06.06.2024 - Freddy
- Fixed some squarify map issues, general stability and readability improvements
- fixed issue where squarify map would turn all floors and everything following the first floor in a line into voids

### [0.10.9] - 05.06.2024 - Freddy - `20-draw-walls`
- Merged 20-draw-walls into master - it is not done, but the decision was made to sync up the state of the code as it is at the moment so we can easily continue working
- There are a lot of issues created with this, the three most notable being
	- Segfaults in 1_input_parsing
	- A map without floors voids in each line starting with the first floor of each line going to the end arriving at the validator (so, that would be an issue with the squarifier presumably)
	- abort issues
- these three issues combined let almost no executions run through as normally expected without issues
- however, well go through those together tomorrow

### [0.10.8] - 05.06.2024 - Freddy - `20-draw-walls`
- fixed maze generator placing really weird player spawns. player now no longer spawns wherever generation started
- various drawing changes

### [0.10.7] - 05.06.2024 - Freddy - `20-draw-walls`
- Fixed maze generator occasionally segfaulting when adding rooms due to incorrect maze boundary checks
- moved the important generation settings as easily changeable macros into settings.h

### [0.10.6] - 04.06.2024 - Freddy - `20-draw-walls`
- implemented view distance
- fixed vis walls count being uninitialized, leading to a segfault

### [0.10.5] - 04.06.2024 - Freddy - `20-draw-walls`
- renamed data back to name - now things work better, it compiles.
- sorted wall drawing functions a little
- implemented non-malloc approach further
- code segfaults on second frame

### [0.10.4] - 04.06.2024 - Freddy - `20-draw-walls`
- sort walls now saves walls into array & ensures wall uniqueness
	- to do this, i created a positions util that compares walls
- moved some files around & cahnged some names

### [0.10.3] - 04.06.2024 - Freddy - `20-draw-walls`
- removed mallocing from raycast intersect, general improvements
- added get_intersection_wall which returns the wall from a long list that is intersected with
- added util function to convert between degrees and directional vectors, and to normalize degrees
- continued work on sort walls function
- renamed get_persistent_game() functin to just game() and get_player() to just player()
- added half-finished wall sorting and raycasting setup, where the raycasts are performed in all the right directions, but not used yet.

### [0.10.2] - 3.06.2024 - Freddy - `20-draw-walls`
- fixed colors! it now draws colorful & doesnt repeat 4 times anymore. big success.
- Added screen clearing to 1_sort_walls, this is not a permanent solution but is helpful while I'm sorting out the drawing logic. This will be removed later.
- Added math lib include to makefile
- better color logging

### [0.10.1] - 30.05.2024 - Freddy - `20-draw-walls`
- fixed incorrect degrees to radians conversion
- reworked angle_to_Screen_x function, that should hopefully be better now
- fixed angle to screen x producing int min and int max values, making the program run predictably slowly when it loops through them. i fixed that. 
- it renders now - something. nothing correct though.

## [0.10.0] - 30.05.2024 - Freddy - `20-draw-walls`
- added calculate deviation angle, which will be helpful to draw the walls and check whether a wall is outside of the fov, ...
- added sort walls (which is supposed to eventually do the raycasting and sorting, but currently does nothing)
- added scale walls, which turns the 3d walls into 2d screen coordinates
- added draw_walls, which draws each wall
- currently, this does not work. instead, there are little lines on top of the screen, the height and width of which are influenced by the players transform.

### [0.9.3] - 29.05.2024 - Freddy - `18-player-movement`
- made mouse change rotations by scrolling because i havent found a mouse position hook - unsure that exists. would be very weird if not though.

### [0.9.2] - 29.05.2024 - Freddy - `18-player-movement`
- fixed movement not working properly because of improper dereferencing of t_tile_type value at standing map spot

### [0.9.1] - 29.05.2024 - Freddy - `18-player-movement`
- fixed parse resetting input pos to 0, thus breaking the update
- added LOG_WALLS to not log walls if not necessary as its thoroughly annoying
- i have worked toward fixing the dysfunctional moement, the position is now here properly, meaning were not in a wall anymore - but movement is still not happening

## [0.9.0] - 29.05.2024 - Freddy - `18-player-movement`
- dysfunctional movement setup, no rotations yet. values dont seem to update. but ive changed so much its committment time
- Changed seperate vec2s in player entity to use one t_transform instead
- made scale_vector use a double for precise values & made it take in any vec2 instead of a transform
- random fixes

### [0.8.2] - 28.05.2024 - Freddy - `15-validation-flood-fill`
- made map generation place player pos where generation started, so pretty much the center of the labrinth
- some map gen fixes & refactorings

### [0.8.1] - 28.05.2024 - Freddy - `15-validation-flood-fill`
- norminettification & efficiency improvements of new flood filled validator

## [0.8.0] - 28.05.2024 - Freddy - `15-validation-flood-fill`
- made validator use a flood fill system starting from the player pos to authenticate the maps & made it set all unreachable fields to void for effiency
- removed random testing code
- random squarify map & parser fixes

### [0.7.2] - 28.05.2024 - Freddy - `14-very-basic-rendering-setup`
- added hook setup & loop hook & key hook
- made program close when esc is received

### [0.7.1] - 28.05.2024 - Freddy - `14-very-basic-rendering-setup`
- Made t_color struct hold unsigned chars, more efficient.
- Made colors as ints use unsigned int instead, as that keeps the data properly
- ceiling & floor colors now render properly

## [0.7.0] - 28.05.2024 - Freddy - `14-very-basic-rendering-setup`
- Added an alpha field to color struct & added conversion to and from int utils
- added mlx setup function & created basic window & drew background white. currently the colors dont appear properly.

### [0.6.1] - 24.05.2024 - Freddy - `12-raycasting-rendering-util`
- Changed infinitify_transform to scale_vector, which takes in an int to set the combined distance of the newly adjusted vectors to.
  - using this, we can implement a render distance easily.

## [0.6.0] - 24.05.2024 - Freddy - `12-raycasting-rendering-utils`
- added pos_distance function
- added infinitify_transform function which makes an inputted vectors rotation as long as possible while keeping the same relative value
- added raycast intersect which returns a vec2 position of where the two vectors intersected or NULL if they dont. This does only work as far as the vectors actually go though - use infinitify vector to make the vector long.

### [0.5.1] - 24.05.2024 - Freddy - `12-raycasting-rendering-utils`
- Added better project structure
- Made Makefile only attempt to import submodules if theyre not there
- Changed vec2s to use doubles
  - Resolved problems created by this
- Removed t_size struct as it was unnecessary
- Removed a bunch of weird write calls that were unnecessary

## [0.5.0] - 23.05.2024 - Freddy
- Added map generation setup & integrated it into project. Use ./cub3d without an argument to have one dynamically generated.
- reordered folders in src files
- added changed validator logging statement

### [0.4.1] - 23.05.2024 - Freddy
- Added `wall_displayer.py` in misc/, which takes in the printed out generated wall and plots them out visually to verify everything is working correctly

## [0.4.0] - 23.05.2024 - Jonas
  - map squarification (added voids at end of map if it was non-rectangular before)

### [0.3.7] - 23.05.2024 - Freddy
- Fixes to maps that had some issues

### [0.3.6] - 23.05.2024 - Freddy
- Various fixes. problem detected: map returned by file reading is not square.

### [0.3.5] - 23.05.2024 - Jonas
 - basic file parsing with basic error checking

### [0.3.4] - 23.05.2024 - Freddy
- Various refactorings & improvements to wall_conversion.c, mainly carrying over map array changes from [0.3.2]
	- wall allocation logic fix
	- made sure to only add walls directly next to a floor, which guarantees optimal performance (will always save ~ `(maze_width + maze_height + amount_of_void_spaces * 2) - 2` walls from having to be calculated with every frame)
- Added testing setup

### [0.3.3] - 23.05.2024 - Freddy
- Added some auto-generated mazes created with the generator I made to the project
- Made start_random_cub3d_map not pick .DS_Store or any other files that may eventually pop up in there

### [0.3.2] - 23.05.2024 - Freddy
- Fixed map not being terminated by properly (**map -> ***map), various changes in validator to reflect this
- Added a testing setup to validator
- Added testcases for fun (merry_go_round + 42)
- Renamed previous printing to logging, instead creating printing, filling it with a function to print out the map in its current state

### [0.3.1] - 22.05.2024 - Freddy
- found out how to render images starting with a png, changed back the file endings in the maps

## [0.3.0] - 22.05.2024 - Freddy - `6-input-validation`
- added input validation function that ensures no floor tiles touch any void tiles or walls

### [0.2.1] - 22.05.2024 - Freddy - `3-enum-map-to-wall-vectors`
- in `wall_conversion.c`, converted bool map to wall array
	- various refactorings & improvements in structure and logic
	- added some comments to clarify the logic

## [0.2.0] - 22.05.24 - Freddy - `3-enum-map-to-wall-vectors`
- made `wall_conversion.c`, which converts the tile types into a boolean array, which removes duplicate overlapping walls.
	- now only walls that can actually seen are in this boolean array. it only needs to be converted to transforms now.

### [0.1.8] - 22.05.2024 - Freddy
- Added 5 more maps that are a good bit more difficult

### [0.1.7] - 22.05.2024 - Freddy
- Added some nice map files that test various things in ./assets/maps/*
- Added a good amount of minecraft textures as walls
- added `start_random_cub3d_map.sh`, which picks a random map to execute and starts ./cub3d
	- made gitignore not ignore shell files

### [0.1.6] - 21.05.2024 - Freddy
- made gc static
- various refactorings & norminettifications

### [0.1.5] - 21.05.2024 - Freddy
- fixed Makefile not working importing submodules

### [0.1.4] - 21.05.2024 - Freddy
- added src folder structure
- added a test map
- added minecraft coral blocks as temp assets
- minecraft assets removal

### [0.1.3] - 21.05.2024 - Jonas
- added structs:
  - vector2 for position and rotation
  - transform which includes pos and rot
  - entity for player / mob
  - input data

### [0.1.2] - 21.05.2024 - Freddy
- Fixed makefile not working with submodule importing properly

### [0.1.1] - 21.05.2024 - Freddy
- removed assets folder, instead added whole minecraft resources as submodule

## [0.1.0] - 21.05.2024 - Freddy
- Added duplicate protected garbage collector with gc_malloc
- added logger and verbose logger
- makefile object folder subdirectories fix
- makefile not properly cleaning submodules fix

## [0.0.0] - 21.05.2024 - Freddy
- initial commit
- Basic project setup
  - colors header with all allowed includes
  - gnl, libft, mlx42 libs as submodules
  - makefile
- test window to verify mlx42 is functional
