#include "SoundManager.h"

SoundManager SoundManager::m_SoundManager;

SoundManager* SoundManager::Instance()
{
	return &m_SoundManager;
}

SoundManager::SoundManager()
{

}

SoundManager::~SoundManager()
{

}

void SoundManager::Init()
{
	//first of all init audio engine
	VirtualFileInit();
	//oslInitAudioME(OSL_FMT_MP3);
	oslInitAudio();

	//button sound
	buttonSound = oslLoadSoundFile("Assets/Sounds/button1.wav",OSL_FMT_NONE);

	//plop sound
	plopSound = oslLoadSoundFile("Assets/Sounds/plop.wav",OSL_FMT_NONE);

	//grass sounds
	grassSounds[0] = oslLoadSoundFile("Assets/Sounds/walking/grass1.wav",OSL_FMT_NONE);
	grassSounds[1] = oslLoadSoundFile("Assets/Sounds/walking/grass2.wav",OSL_FMT_NONE);
	grassSounds[2] = oslLoadSoundFile("Assets/Sounds/walking/grass3.wav",OSL_FMT_NONE);
	grassSounds[3] = oslLoadSoundFile("Assets/Sounds/walking/grass4.wav",OSL_FMT_NONE);

	//grawel
	grawelSounds[0] = oslLoadSoundFile("Assets/Sounds/walking/gravel1.wav",OSL_FMT_NONE);
	grawelSounds[1] = oslLoadSoundFile("Assets/Sounds/walking/gravel2.wav",OSL_FMT_NONE);
	grawelSounds[2] = oslLoadSoundFile("Assets/Sounds/walking/gravel3.wav",OSL_FMT_NONE);
	grawelSounds[3] = oslLoadSoundFile("Assets/Sounds/walking/gravel4.wav",OSL_FMT_NONE);

	//stone
	stoneSounds[0] = oslLoadSoundFile("Assets/Sounds/walking/stone1.wav",OSL_FMT_NONE);
	stoneSounds[1] = oslLoadSoundFile("Assets/Sounds/walking/stone2.wav",OSL_FMT_NONE);
	stoneSounds[2] = oslLoadSoundFile("Assets/Sounds/walking/stone3.wav",OSL_FMT_NONE);
	stoneSounds[3] = oslLoadSoundFile("Assets/Sounds/walking/stone4.wav",OSL_FMT_NONE);

	//wood
	woodSounds[0] = oslLoadSoundFile("Assets/Sounds/walking/wood1.wav",OSL_FMT_NONE);
	woodSounds[1] = oslLoadSoundFile("Assets/Sounds/walking/wood2.wav",OSL_FMT_NONE);
	woodSounds[2] = oslLoadSoundFile("Assets/Sounds/walking/wood3.wav",OSL_FMT_NONE);
	woodSounds[3] = oslLoadSoundFile("Assets/Sounds/walking/wood4.wav",OSL_FMT_NONE);

	//set default values
	currentWalkSound = 0;
	lastWalkSound = 0;

	playerSounds = true;
}

void SoundManager::PlayMenuSound()
{
	oslPlaySound(buttonSound, 1);
}

void SoundManager::PlayPlopSound()
{
	if(playerSounds)
		oslPlaySound(plopSound,1);
}

void SoundManager::PlayWalkSound(int type)
{
	if(playerSounds)
	{
		switch(type)
		{
			case 0://grass
			{
				currentWalkSound = rand() % 4;

				//stop last sound
				oslStopSound(grassSounds[lastWalkSound]);

				//play new sound
				oslPlaySound(grassSounds[currentWalkSound],1);

				//set last sound as current
				lastWalkSound = currentWalkSound;
			}
			break;
			case 1://gravel
			{
				currentWalkSound = rand() % 4;

				//stop last sound
				oslStopSound(grawelSounds[lastWalkSound]);

				//play new sound
				oslPlaySound(grawelSounds[currentWalkSound],1);

				//set last sound as current
				lastWalkSound = currentWalkSound;
			}
			break;
			case 2://stone
			{
				currentWalkSound = rand() % 4;

				//stop last sound
				oslStopSound(stoneSounds[lastWalkSound]);

				//play new sound
				oslPlaySound(stoneSounds[currentWalkSound],1);

				//set last sound as current
				lastWalkSound = currentWalkSound;
			}
			break;
			case 3://wood
			{
				currentWalkSound = rand() % 4;

				//stop last sound
				oslStopSound(woodSounds[lastWalkSound]);

				//play new sound
				oslPlaySound(woodSounds[currentWalkSound],1);

				//set last sound as current
				lastWalkSound = currentWalkSound;
			}
			break;
		}
	}
}
