#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
 [STAThreadAttribute]
 void main(array<String^>^ arg) {
	 Application::EnableVisualStyles;
	 Application::SetCompatibleTextRenderingDefault;
	 vcc::MyForm form;
	 Application::Run(% form);
}