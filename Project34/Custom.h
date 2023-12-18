#pragma once

using namespace System::Drawing::Drawing2D;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Rounded
{
public:
    static void RoundCorners(Control^ control, int radius)
    {
        GraphicsPath^ path = gcnew GraphicsPath();

        path->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        path->AddArc(control->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        path->AddArc(control->Width - radius * 2, control->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        path->AddArc(0, control->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        path->CloseAllFigures();

        control->Region = gcnew System::Drawing::Region(path);
    }
public:
    static void CurveButton(Button^ button, int radius)
    {
        GraphicsPath^ path = gcnew GraphicsPath();

        path->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        path->AddArc(button->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        path->AddArc(button->Width - radius * 2, button->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        path->AddArc(0, button->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        path->CloseAllFigures();

        button->Region = gcnew System::Drawing::Region(path);
    }



};




