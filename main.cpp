// Nya Walton   J00894068  11/8/2022

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    float a;
    float b;
    float c, x1, x2;
    float discriminant;
    
    
    cout << "Input: ";
    cin >> a >> b >> c;
    
    
    discriminant = pow(b, 2) - (4*a*c);
    x1 = ( -b + sqrt(discriminant)) / (2*a);
    x2 = ( -b - sqrt(discriminant)) / (2*a);
    
    if (discriminant == 0)
    {
        cout << "The single root is " << x1 << endl;
    }
 
    else if (discriminant > 0 )
    { cout << "Two Real Roots. \n" << "-First Root " << x1 << "\n" << "-Second Root" << x2 << endl;

        
    }
       else if (discriminant < 0)
    {  cout << "Complex roots\n";}
        
        
    
    return 0;
}



 
