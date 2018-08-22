//program to enter temperature in Fahrenheit and convert to Celsius 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable

double f;
 
//asking for input
cout << "Temprature Converter\n";
cout << "Please enter Temprature in Fahrenheit: ";

//reading the input for variable
cin >> f;

//convertion caculation
cout << "Value of Tempetature you enter in Fahrenheit is: " << f << " F" << endl;
cout << "Temperature in Celsius is: " << (f-32)*5/9 << " C" << endl;

return 0;
}
