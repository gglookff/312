#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	practice::MyForm form;
	Application::Run(% form);
};