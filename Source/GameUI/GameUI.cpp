// Fill out your copyright notice in the Description page of Project Settings.

#include "GameUI.h"
#include "Modules/ModuleManager.h"

#include "MainWindow.h"


class GameUIGameModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		NsRegisterComponent<GameUI::MainWindow>();
		UE_LOG(LogTemp, Warning, TEXT("StartUp GameUI"));	
	}

	virtual void ShutdownModule() override
	{
		NsUnregisterComponent<GameUI::MainWindow>();

	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(GameUIGameModule, GameUI, "GameUI" );
