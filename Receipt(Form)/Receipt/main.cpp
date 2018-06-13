#include "Receipt.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);


	Receipt::Receipt Form;
	Application::Run(%Form);
}

