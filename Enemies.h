#pragma once
#include "Animation.h"
#include "TileManager.h"
#include <random>

//////////////////////////////////////////////////////////////
// This abstract class is to be implemented in all enemy types
// even if they don't quite have the 
// same behaviour
//////////////////////////////////////////////////////////////

class Enemies :
	public Animation
{
public:
	// Same type of cosntruction as the player class
	Enemies();
	Enemies(Texture::ID id, int nbFrame, int frameRate, const point<int>& srcPos, const point<int>& frameSize);

	// Same thing as the Player's movement moves with the tile manage
	virtual void Move(TileManager* tm) = 0;
	// Fancy getter to find the next tile's type. Nearly all enemies can only move on 00
	// Tile types.
	virtual point<int> GetNextPos(const Vector2D &direction) = 0;

	// If the collision with the sword is true, then apply damage to the enemy.
	virtual void Lacerate(SDL_Rect hitter) = 0;

	virtual ~Enemies();

};

