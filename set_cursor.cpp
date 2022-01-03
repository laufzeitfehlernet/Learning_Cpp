#include <windows.h>
#include <iostream>
using namespace std;
//

int main(void)
{
//initialize objects for cursor manipulation
    HANDLE hStdout;
    COORD destCoord;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

//position cursor at start of window
    destCoord.X = 5;
    destCoord.Y = 5;
 //   SetConsoleCursorPosition(hStdout, destCoord);
    cout << "Das ist ein Text!" << endl;
}
