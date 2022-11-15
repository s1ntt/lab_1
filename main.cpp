#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
 int N;
 cout <<"Введіть для точки M координату по X";
 float x;
cin>> x;
cout <<"Введіть для точки M координату по Y";;
float y;
cin >> y;
if (y > 0){
   if (x * x + y *y < 16){
      if (x >= 0) N = 2;
      else N = 1;
   } else{
      N = 3;
   }
} else {
   N = 4;
}
std::cout<<"\t РЕЗУЛЬТАТ:";
cout<<"Точка M ("<< x <<";"<< y <<") належить області N = "<< N;
cout<<'\n' + "Для закінчення програми натисніть Enter.";
}