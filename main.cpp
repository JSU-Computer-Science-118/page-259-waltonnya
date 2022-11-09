// Nya Walton   J00894068  11/8/2022
#include <iostream>
#include <cmath>
using namespace std;
int main()
  {
    int a;
    int b;
    int c;
    int discriminant;
    
    cout << "Input value of a: ";
    cin >> a;
    cout << endl;
    
    cout << "Input value of b: ";
    cin >> b;
    cout << endl;
    
    cout << "Input value of c: ";
    cin >> c;
    cout << endl;
    
    discriminant = pow(b, 2) - (4*a*c);
    
    if (discriminant == 0)
    {
        cout << "The equation has a single repeated root.";
    }
 
    else if (discriminant > 0 )
    { cout << "The equation has two real roots.";
    }
       else if (discriminant < 0)
    {  cout << "The equation has two complex roots.";}
  else if (discriminant >= 0)
    "cout << "The roots are";"
        
        
    
    return 0;
}
  
