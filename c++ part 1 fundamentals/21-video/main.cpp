#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
double result = 0, pi = 3.14,  r = 0;

cout <<  "Enter the radius of the circle: ";
cin >>  r;

result = pi * pow(r, 2);
cout << "area= " << result << endl;

return 0;
}