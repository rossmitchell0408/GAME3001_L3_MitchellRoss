#include "Tile.h"

#include "Config.h"
#include "TextureManager.h"
#include "Util.h"

Tile::Tile()
{
	setWidth(Config::TILE_SIZE);
	setHeight(Config::TILE_SIZE);
}

Tile::~Tile()
= default;


void Tile::draw()
{
	//TextureManager::Instance()->draw("Tile", getTransform()->position.x, getTransform()->position.y, 0, 255, true);
	Util::DrawRect(getTransform()->position, getWidth(), getHeight());
	
}

void Tile::update()
{
	
}

void Tile::clean()
{
	
}
