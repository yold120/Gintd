#include <windows.h> 
#include <iostream>
using namespace std;




void gotoxy(int x, int y);
void setcolor(WORD color);
void setForeGroundAndBackGroundColor(int ForeGroundColor,int BackGroundColor);
void clrscr(); 
void printAllColors();



int main()
{
  // set red text on black background    
  gotoxy(30,10);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3); cout<<"4th June";  

  // set white text on black background
  gotoxy(1,23);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);


  printAllColors( ix=3);

  return 0;
}


void setcolor(WORD color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    return;
}



void setForeGroundAndBackGroundColor(int ForeGroundColor,int BackGroundColor)
{
   int color=16*BackGroundColor+ForeGroundColor;
   setcolor(color);
}




void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return;
}




void clrscr()
{
    COORD coordScreen = { 0, 0 };
    DWORD cCharsWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD dwConSize;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfo(hConsole, &csbi);
    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, TEXT(' '), dwConSize, coordScreen, &cCharsWritten);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, dwConSize, coordScreen, &cCharsWritten);
    SetConsoleCursorPosition(hConsole, coordScreen);
    return;
}


void printAllColors()
{
   int ix=0;
   int iy=1;
   int col=0;
   setcolor(7);
   clrscr();

   // Demo setForeGroundAndBackGroundColor
   for (int i =0;i<16;i++)
   {
      for(int j=0;j<16;j++)
      {
       setForeGroundAndBackGroundColor(i,j);
       gotoxy(i*5  , iy+j); cout<<""<<i + (16 *j)<<"";
       col++;
      }
   }


   setcolor(31);
   cout<<"\n";

  gotoxy(1,23);
}
