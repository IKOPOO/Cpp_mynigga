/*

  9 3 1 8 3 2 7 3 3 6 3 4 5 3 5 4 3 6 3 3 7 2 3 8 1 3 9 
  9 3 1 8 3 2 7 3 3 6 3 4 5 3 5 4 3 6 3 3 7 2 3 8 1 3 9 
  9 3 1 8 3 2 7 3 3 6 3 4 5 3 5 4 3 6 3 3 7 2 3 8 1 3 9 
  9 3 1 8 3 2 7 3 3 6 3 4 5 3 5 4 3 6 3 3 7 2 3 8 1 3 9 
  9 3 1 8 3 2 7 3 3 6 3 4 5 3 5 4 3 6 3 3 7 2 3 8 1 3 9 
  9 3 1 8 3 2 7 3 3 6 3 4 5 3 5 4 3 6 3 3 7 2 3 8 1 3 9 
  
*/
#include <iostream> 
using namespace std;

//kamus 
int a,b,c,d;
int s,x;

//deskripsi
main()
{
  s = 0;
 while(s <= 5)
 {
  
    a = 9;
    b = 3;
    c = 1;
    do
    {
      cout << a << " ";
      cout << b << " ";
      cout << c << " ";
      a = a - 1;
      c = c + 1;
    }while(a > 0 );

  cout << "\n";
  s = s + 1;
 }
}