#pragma once
#include "SplashScreen.h"
#include "Game.h"
#include "MyForm.h"
#include "Menus.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
    Application::Run(gcnew Project34::SplashScreen()); 
}
