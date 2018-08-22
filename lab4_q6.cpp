// program to enter base and height of a triangle and find its area. 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable
float b;
float h;

//asking for input  and   reading the input for variable
cout << "\n";
cout << "Find Area of triangle from two known height and base\n";
cout << "Enter Height: ";
cin >> b;
cout << "Enter Base: ";
cin >> h;


//convertion caculation
cout << "\n";
cout << "Value of Height you enter is: " << b << endl;
cout << "Value of Base you enter is: " << h << endl;
cout << "\n";
cout << "Area of triangle is: " << b*h/2 << endl;
cout << "\n";


return 0;
}
