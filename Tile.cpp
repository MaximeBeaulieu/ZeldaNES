#include "Tile.h"

const int Tile::TILE_WIDTH;
const int Tile::TILE_HEIGHT;

Tile::Tile()
	: type(0)
	, currentX(0)
	, currentY(0)
{

}

Tile::Tile(int tileType)
	: Sprite(Texture::ID::Tile, { ((tileType / 3) * TILE_WIDTH), ((tileType % 3) * TILE_HEIGHT) }, { TILE_WIDTH, TILE_HEIGHT })
	, type(tileType)
	, currentX(0)
	, currentY(0)
{
	box.x = (int)currentX;
	box.y = (int)currentY;

	box.w = TILE_WIDTH;
	box.h = TILE_HEIGHT;
}

Tile::~Tile()
{

}


