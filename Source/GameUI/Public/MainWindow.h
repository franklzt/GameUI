// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameUI.h"

namespace GameUI
{

	////////////////////////////////////////////////////////////////////////////////////////////////////
	class MainWindow : public Noesis::UserControl
	{
	private:

		NS_IMPLEMENT_INLINE_REFLECTION(MainWindow, Noesis::UserControl)
		{
			NsMeta<Noesis::TypeId>("GameUI.MainWindow");
		}
	};

}
