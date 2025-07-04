#!/bin/bash

MAP_DIR="assets/maps/campaign"

# Accept a skip parameter
SKIP=${1:-0}
COUNTER=0

rm -f "save.cubsave"

for map_file in "$MAP_DIR"/*; do
	if [ $COUNTER -lt $SKIP ]; then
		((COUNTER++))
		continue
	fi

	while true; do
		echo -e "\n\n\n"
		./cub3D "$map_file"
		exit_code=$?

		if [[ exit_code -eq 0 ]]; then
			break
		elif [[ exit_code -eq 214 ]]; then
			exit
		fi
	done

	((COUNTER++))
done

echo -e "\n\n\n"
echo "----- ARCADE MODE -----"
echo "Campaign completed!"
echo "But I'm already bored..."
echo "Wait, what's that over there?"
echo "Infinite random gen maps, here I come!"

while true; do
	./cub3D
	exit_code=$?

	if [[ exit_code -eq 214 ]]; then
		exit
	fi
done
