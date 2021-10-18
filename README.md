# Momotaro

## Architecture

The game has main level which is just the main menu widgets. Play will take you to the Map level, in which most of the code is for the random map generation stored in the Map actor. Clicking on a shop will take you to the shop level which allows you to buy cards. Clicking on an enemy icon takes you to a random enemy level. This is what most of the code is for. The battle is made up of different modules we divided up. One for the card logic, one for the enemies, one for the UI and one for tying the whole battle together by connecting up the other modules (In which most of this code is in the player controller).

To play the game clone this repository, open it in Unreal 4.26.2 (requires Visual Studio), build each seperate level file and click run in new window. Unfortunately last minute packing the executable failed, it would start but you would be stuck at the menu.
