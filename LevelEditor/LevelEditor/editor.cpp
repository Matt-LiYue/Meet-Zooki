#include "editor.h"


Editor::Editor()
{
	// 1280 x 928 
	level.resize(40);
	for (int i = 0; i < 40; i++)
	{
		level[i].resize(29);
	}
	size_x = 40;
	size_y = 29;
	tileSize = 32;
}

Editor::Editor(int x, int y)
{
	// (X*32) x Y*32) 
	level.resize(x);
	for (int i = 0; i < x; i++)
	{
		level[i].resize(y);
	}
	size_x = x;
	size_y = y;
	tileSize = 32;
}

Tile Editor::getTile(int x)
{
	return tiles.at(x);
}

Tile Editor::getCurrentTile()
{
	return tiles.at(currentTile);
}

Tile Editor::getLevelTile(int x, int y)
{
	level[x][y].setWindowPos(x, y, tileSize);
	return level[x][y];
}

int Editor::getSizeX()
{
	return size_x;
}

int Editor::getSizeY()
{
	return size_y;
}

std::vector<std::vector<Tile>> Editor::getLevel()
{
	return level;
}

void Editor::setTileInLevel(Tile t, int x, int y)
{
	level[x][y] = t;
}

void Editor::incrementCurrentTile()
{
	currentTile++;
	if (currentTile < tiles.size() - 1)
	{
		if (getTile(currentTile).getTileSprite().getTexture() == NULL)
		{
			currentTile++;
		}
	}
	if (currentTile > tiles.size()-1)
	{
		currentTile = 0;
	}
}

void Editor::decrementCurrentTile()
{
	
	currentTile--;
	if (currentTile > 0)
	{
		if (getTile(currentTile).getTileSprite().getTexture() == NULL)
		{
			currentTile--;
		}
	}
	if (currentTile < 0)
	{
		currentTile = tiles.size() - 1;
	}
}

// creates a vector of tiles for use in the game
void Editor::LoadTiles()
{
	std::filebuf infoFile;
	if (infoFile.open("SpriteInfo.txt", std::ios::in))
	{
		std::istream stream(&infoFile);

		std::getline(stream, spriteSheetName);
		LoadSpriteSheet(spriteSheetName);
		
		std::string temp; // tempX used to fill in Tile objects
		std::string temp2;
		std::string temp3;
		std::string temp4;

		while (stream)
		{
			std::getline(stream, temp); //ID
			Tile t(convertStringToInt(temp));

			std::getline(stream, temp); //xpos
			std::getline(stream, temp2); //ypos
			std::getline(stream, temp3); //xlen
			std::getline(stream, temp4); //ylen

			int xpos = convertStringToInt(temp);
			int ypos = convertStringToInt(temp2);
			int lenx = convertStringToInt(temp3);
			int leny = convertStringToInt(temp4);

			getSpriteFromFile(t, xpos, ypos, lenx, leny);
			sf::Sprite sprite;
			sprite.setTexture(spriteSheet);
			sprite.setTextureRect(sf::IntRect(xpos, ypos, lenx, leny));
			t.setTileSprite(sprite, xpos, ypos, lenx, leny);

			std::getline(stream, temp); //xoffL
			std::getline(stream, temp2); //xoffR
			std::getline(stream, temp3); //yoffL
			std::getline(stream, temp4); //yoffR

			t.setTileInfo(convertStringToInt(temp), convertStringToInt(temp2), convertStringToInt(temp3), convertStringToInt(temp4));

			std::getline(stream, temp); //isSolid
			std::getline(stream, temp2); //isdeadly
			std::getline(stream, temp3); //iscollectible

			t.setTileInteraction(convertStringToInt(temp), convertStringToInt(temp2), convertStringToInt(temp3));

			tiles.push_back(t);
		}
		
		infoFile.close();
	}
}

void Editor::SaveLevel()
{
	std::ofstream levelData;
	levelData.open("level.txt");
	
	levelData << spriteSheetName;
	levelData << "\n";
	levelData << size_x;
	levelData << "\n";
	levelData << size_y;
	levelData << "\n";
	levelData << tileSize;
	levelData << "\n";
	levelData << startX;
	levelData << "\n";
	levelData << startY;
	levelData << "\n";

	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			if (level[i][j].getTileSprite().getTexture() != NULL)
			{
				levelData << level[i][j].getID();
				levelData << "\n";
				levelData << level[i][j].getPosX();
				levelData << "\n";
				levelData << level[i][j].getPosY();
				levelData << "\n";
				levelData << level[i][j].getXOffset_L();
				levelData << "\n";
				levelData << level[i][j].getXOffset_R();
				levelData << "\n";
				levelData << level[i][j].getYOffset_L();
				levelData << "\n";
				levelData << level[i][j].getYOffset_R();
				levelData << "\n";
				levelData << level[i][j].getIsSolid();
				levelData << "\n";
				levelData << level[i][j].getIsDeadly();
				levelData << "\n";
				levelData << level[i][j].getIsCollectible();
				levelData << "\n";
			}
		}
	}

	levelData.close();
}

// load  texture from file
void Editor::LoadSpriteSheet(std::string filename)
{
	spriteSheet.loadFromFile(filename);
}

// create sprites from spritesheet
void Editor::getSpriteFromFile(Tile t, int posx, int posy, int lenx, int leny)
{
	t.getTileSprite().setTexture(spriteSheet);
	
}

//converts a string to an int
int Editor::convertStringToInt(std::string s)
{
	int i;
	std::istringstream(s) >> i;
	return i;
}

Editor::~Editor()
{
}