#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	NewSpriteCreatorGUI::MyForm form;
	if (args->Length > 0)
	{
		form.wasOpenedWithFile = true;
		form.pathtostartfile = args[0];
	}
	else
	{
		form.wasOpenedWithFile = false;
	}
	Application::Run(% form);
}