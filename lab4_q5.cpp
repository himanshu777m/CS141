// program to enter two angles of a triangle and find the third angle. 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable
float a1;
float a2;

//asking for input  and   reading the input for variable
cout << "Find third angle of triangle from two known angel\n";
cout << "Enter First angle: ";
cin >> a1;
cout << "Enter Secound angle: ";
cin >> a2;


//convertion caculation
cout << "Value of angles you enter are: " << a1 << " and " << a2 << endl;
cout << "Third Angel is: " << 180-(a1+a2) << endl;


return 0;
}
