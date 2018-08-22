//program to enter temperature in Celsius and convert it into Fahrenheit. 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable

double T;
 
//asking for input
cout << "Temprature Converter\n";
cout << "Please enter Temprature in Celsius: ";

//reading the input for variable
cin >> T;

//convertion caculation
cout << "Value of Tempetature you enter in Celsius is: " << T << " Degree Celsisus" << endl;
cout << "Temperature in Fahrenheit is: " << 9*T/5 + 32 << " Degree Fahrenheit" << endl;
cout << "Temperature in Kelvin is: " << T + 273 << " K" << endl;

return 0;
}
