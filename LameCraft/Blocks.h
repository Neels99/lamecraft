#ifndef BLOCKS_H
#define BLOCKS_H

#include "BaseBlock.h"

class GrassBlock : public BaseBlock
{
public:

	GrassBlock();

	static block_t getID();
};

class DirtBlock : public BaseBlock
{
public:

	DirtBlock();
	static block_t getID();
};

class RockBlock : public BaseBlock
{
public:

	RockBlock();
	static block_t getID();
};

class WaterBlock : public BaseBlock
{
public:

	WaterBlock();
	static block_t getID();
};

class GoldBlock : public BaseBlock
{
public:

	GoldBlock();
	static block_t getID();
};

class LadderBlock : public BaseBlock
{
public:

	LadderBlock();
	static block_t getID();
};

class SandBlock : public BaseBlock
{
public:

	SandBlock();
	static block_t getID();
};

class WoodBlock : public BaseBlock
{
public:

	WoodBlock();
	static block_t getID();
};

class LeavesBlock : public BaseBlock
{
public:

	LeavesBlock();
	static block_t getID();
};

class TNTBlock : public BaseBlock
{
public:

	TNTBlock();
	static block_t getID();
};

class BlackWoolBlock : public BaseBlock
{
public:

	BlackWoolBlock();
	static block_t getID();
};

class RedWoolBlock : public BaseBlock
{
public:

	RedWoolBlock();
	static block_t getID();
};

class DarkGreyWoolBlock : public BaseBlock
{
public:

	DarkGreyWoolBlock();
	static block_t getID();
};

class BrownWoolBlock : public BaseBlock
{
public:

	BrownWoolBlock();
	static block_t getID();
};

class LightBlackWoolBlock : public BaseBlock
{
public:

	LightBlackWoolBlock();
	static block_t getID();
};

class PinkWoolBlock : public BaseBlock
{
public:

	PinkWoolBlock();
	static block_t getID();
};

class LightGreenWoolBlock : public BaseBlock
{
public:

	LightGreenWoolBlock();
	static block_t getID();
};

class YellowWoolBlock : public BaseBlock
{
public:

	YellowWoolBlock();
	static block_t getID();
};

class BlueWoolBlock : public BaseBlock
{
public:

	BlueWoolBlock();
	static block_t getID();
};

class LightBlueWoolBlock : public BaseBlock
{
public:

	LightBlueWoolBlock();
	static block_t getID();
};

class FioletWoolBlock : public BaseBlock
{
public:

	FioletWoolBlock();
	static block_t getID();
};

class PastelWoolBlock : public BaseBlock
{
public:

	PastelWoolBlock();
	static block_t getID();
};

class LightFioletWoolBlock : public BaseBlock
{
public:

	LightFioletWoolBlock();
	static block_t getID();
};

class OrangeWoolBlock : public BaseBlock
{
public:

	OrangeWoolBlock();
	static block_t getID();
};

class CactusBlock : public BaseBlock
{
public:

	CactusBlock();
	static block_t getID();
};

class AllSnowBlock : public BaseBlock
{
public:

	AllSnowBlock();
	static block_t getID();
};

class BrickBlock : public BaseBlock
{
public:

	BrickBlock();
	static block_t getID();
};

class CageBlock : public BaseBlock
{
public:

	CageBlock();
	static block_t getID();
};

class SnowBlock : public BaseBlock
{
public:

	SnowBlock();
	static block_t getID();
};

class DarkWoodBlock : public BaseBlock
{
public:

	DarkWoodBlock();
	static block_t getID();
};

class WhiteWoodBlock : public BaseBlock
{
public:

	WhiteWoodBlock();
	static block_t getID();
};

class IceBlock : public BaseBlock
{
public:

	IceBlock();
	static block_t getID();
};

class CaneBlock : public BaseBlock
{
public:

	CaneBlock();
	static block_t getID();
};

class BoxBlock : public BaseBlock
{
public:

	BoxBlock();
	static block_t getID();
};

class ShelfBlock : public BaseBlock
{
public:

	ShelfBlock();
	static block_t getID();
};

class WallBlock : public BaseBlock
{
public:

	WallBlock();
	static block_t getID();
};

//
class DrySandBlock : public BaseBlock
{
public:

	DrySandBlock();
	static block_t getID();
};

class SnowLewesBlock : public BaseBlock
{
public:

	SnowLewesBlock();
	static block_t getID();
};

class MudBlock : public BaseBlock
{
public:

	MudBlock();
	static block_t getID();
};

class GlassBlock : public BaseBlock
{
public:

	GlassBlock();
	static block_t getID();
};

class BrownCoailBlock : public BaseBlock
{
public:

	BrownCoailBlock();
	static block_t getID();
};

class BlackCoailBlock : public BaseBlock
{
public:

	BlackCoailBlock();
	static block_t getID();
};

class BlueCoailBlock : public BaseBlock
{
public:

	BlueCoailBlock();
	static block_t getID();
};

class RedCoailBlock : public BaseBlock
{
public:

	RedCoailBlock();
	static block_t getID();
};

class SlamRockBlock : public BaseBlock
{
public:

	SlamRockBlock();
	static block_t getID();
};

class WaterRockBlock : public BaseBlock
{
public:

	WaterRockBlock();
	static block_t getID();
};

class JackOLantern : public BaseBlock
{
public:

	JackOLantern();
	static block_t getID();
};

//must be always last
class IronBlock : public BaseBlock
{
public:

	IronBlock();
	static block_t getID();
};


#endif
