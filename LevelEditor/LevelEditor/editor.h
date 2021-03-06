#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<SFML/Graphics.hpp>
#include "Tile.h"
#include "Zooki.h"

class Editor
{
public:
	Editor();
	Editor(int x, int y, int tilesize);
	Editor(std::string levelFile, int windowSizeX, int windowSizeY);
	~Editor();

	void LoadTiles(std::string filename);
	void LoadLevel(std::string filename);
	void SaveLevel();

	//TODO setPlayerSprite
	void setBackground(std::string filename); // load the background
	void setTileInLevel(Tile t, int x, int y); // place tile in level array
	void removeTileInLevel(int x, int y); // remove tile from level array
	void clearLevel();

	void incrementCurrentTile(); // curTile++
	void decrementCurrentTile(); // curTile--

	sf::Sprite getBackground(); // get background texture
	std::vector < std::vector<Tile>> getLevel(); // return level array

	Tile* getLevelTile(int x, int y); // get tile pointer from level array
	Tile* getTile(int x); // get tile from sprite array
	Tile* getCurrentTile(); // get current tile selected

	int getSizeX();
	int getSizeY();
	int getStartX();
	int getStartY();

	void setStart(int x, int y);

	sf::Sprite* getplayerSprite();

private:
	sf::Texture background;
	sf::Texture spriteSheet; // sprite sheet texture
	std::vector<Tile> tiles; // array of tiles loaded from sprite sheet
	sf::Sprite playerSprite; // player sprite
	sf::Sprite backgroundSprite;

	std::string spriteSheetName;
	std::string spriteInfoSheetName;

	std::vector<std::vector<Tile>> level; // 2d level array

	int size_x; // x size of level array
	int size_y; // y size of level array
	int tileSize; // how big are tiles (assume size x = size y)
	int startX; // x position of start
	int startY; // y position of start

	int currentTile; // current tile being placed

	void LoadSpriteSheet(std::string filename);
	void LoadBackground(std::string filename);
	void getSpriteFromFile(Tile t, int posx, int posy, int lenx, int leny);
	int convertStringToInt(std::string s);

};

