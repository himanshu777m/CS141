//program to calculate area of an equilateral triangle. 

//include library
#include<iostream>
#include<cmath>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable
float s;

//asking for input  and   reading the input for variable
cout << "\n";
cout << "Find Area of equilateral triangle from two known side length\n";
cout << "Enter Length of One Side: ";
cin >> s;


//convertion caculation
cout << "\n";
cout << "Area of eqilateral triangle is: " << sqrt(3)*s*s/4 << endl;
cout << "\n";


return 0;
}
