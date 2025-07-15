// Fill out your copyright notice in the Description page of Project Settings.


#include "Lee_GameMode.h"
#include "MyPlayer.h"
ALee_GameMode::ALee_GameMode()
{
	DefaultPawnClass = AMyPlayer::StaticClass();
}
