//program to enter length in centimeter and convert it into meter and kilometer. 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable
float l;
 
//asking for input
cout << "Length Converter\n";
cout << "Please enter length in centimeter: ";

//reading the input for variable
cin >> l;

//convertion caculation
cout << "Value of length you enter in centimeter is: " << l << " cm" << endl;
cout << "length in meter is: " << l/100 << " m" << endl;
cout << "length in kilometer is: " << l/100000 << " km" << endl;

return 0;
}
 

