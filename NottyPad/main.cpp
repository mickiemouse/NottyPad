#include "NottyPad_GUI.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

	NottyPad::NottyPad_GUI^ NottyPad_Main = gcnew NottyPad::NottyPad_GUI;
	System::Windows::Forms::Application::Run(NottyPad_Main);
}