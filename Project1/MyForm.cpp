#include "MyForm.h"
#include "Header.h"
#include <Windows.h>


using namespace Project1;
using namespace std;
using namespace System;



//Product obj;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    setlocale(LC_ALL, "Russian");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}




