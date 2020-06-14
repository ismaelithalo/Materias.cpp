#include <iostream>  
 #include <Windows.h>  
 using namespace std;  
 HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);  
 void fontsize(int,int); 
 
 int main(){  
  fontsize(36, 24);  
  cout << "This is a symmetrical font" << endl;  
  system("pause");  
  
  return 0;
 }  
 
 void fontsize(int a, int b){  
  PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();  
  lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);  
  GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
  lpConsoleCurrentFontEx->dwFontSize.X = a;  
  lpConsoleCurrentFontEx->dwFontSize.Y = b;  
  SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
 }
