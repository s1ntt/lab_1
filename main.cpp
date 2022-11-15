#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
   float a = 10.5, b = 0.154, c = 5.3, y;
   y = pow(pow((a + b) / exp(a * b), 4) / sin(1. / (a * b)) + pow(a, 3) * b, 5. / 7) * c;
   cout << "Значення виразу дорівнює " << y << endl;
}