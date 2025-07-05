// Main.cpp
#include "WelcomeForm.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace TaskNTrack; // 👈 This brings in the WelcomeForm from your namespace

[STAThreadAttribute]
int main(array<String^>^ args) // 👈 Use the proper return type and args
{
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    WelcomeForm^ form = gcnew WelcomeForm(); // 👈 Use handle (^) and gcnew
    Application::Run(form);
}
