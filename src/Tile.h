#pragma once
#ifndef _TILE_H_
#define _TILE_H_
#include "DisplayObject.h"

class Tile : public DisplayObject
{
public:
	// Constructor
	Tile();
	
	// Destructor
	~Tile();
	
	// Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;
};

#endif
