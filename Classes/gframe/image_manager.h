#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

#include "config.h"
#include "data_manager.h"
#include <unordered_map>
#include <list>
#include <string>

namespace ygo {

class ImageManager {
public:
	bool Initial(const irr::io::path dir);
	void SetDevice(irr::IrrlichtDevice* dev);
	void ClearTexture();
	void RemoveTexture(int code);
	irr::video::ITexture* GetTexture(int code);
	irr::video::ITexture* GetTextureFromFile(void* file, s32 width, s32 height);
	irr::video::ITexture* GetTextureThumb(int code);
	irr::video::ITexture* GetTextureField(int code);
	
	path image_work_path;

	std::unordered_map<int, irr::video::ITexture*> tMap;
	std::unordered_map<int, irr::video::ITexture*> tThumb;
	std::unordered_map<int, irr::video::ITexture*> tFields;
	irr::IrrlichtDevice* device;
	irr::video::IVideoDriver* driver;
	irr::video::ITexture* tCover[2];
	irr::video::ITexture* tUnknown;
	irr::video::ITexture* tAct;
	irr::video::ITexture* tAttack;
	irr::video::ITexture* tNegated;
	irr::video::ITexture* tChain;
	irr::video::ITexture* tNumber;
	irr::video::ITexture* tLPFrame;
	irr::video::ITexture* tLPBar;
	irr::video::ITexture* tMask;
	irr::video::ITexture* tEquip;
	irr::video::ITexture* tTarget;
	irr::video::ITexture* tChainTarget;
	irr::video::ITexture* tLim;
	irr::video::ITexture* tOT;
	irr::video::ITexture* tHand[3];
	irr::video::ITexture* tBackGround;
	irr::video::ITexture* tBackGround_menu;
	irr::video::ITexture* tBackGround_deck;
	irr::video::ITexture* tField[2];
	irr::video::ITexture* tFieldTransparent[2];
	irr::video::ITexture* tRScale[14];
	irr::video::ITexture* tLScale[14];
	irr::video::ITexture* tClock;
	std::list<std::string> support_types;
};

extern ImageManager imageManager;

}

#endif // IMAGEMANAGER_H
