// Nya Walton   J00894068  11/8/2022


   #include <iostream>
#include <cmath>

using namespace std;

int main ()

{


  double a;
  double b;
  double c;
  double x;
  double discriminant;

  cout << "enter the value for a" << endl;
  cin >> a;
  cout << "enter the value for b" << endl;
  cin >> b;
  cout << "enter the value for c" << endl;
  cin >> c;

    x = ((b)*(b)-((4)*(a)*(c)));
  discriminant = pow(x, 0.5);

  cout << "The descriminant is " << discriminant << endl;
  cout << endl;
  
if (discriminant >= 0)
{
  if (discriminant = 0)
     cout << "There is one real solution" << endl;
  else 
     cout << "There are at least two real solutions" << endl;
}
else
   cout << "There are no real solutions" << endl;
  
  return 0;
  }
