//program to convert days into years, weeks and days. 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable
int d;

//asking for input
cout << "Convertion of Days into Years, Weeks and Month.\n";
cout << "Please enter number of Days: ";

//reading the input for variable
cin >> d;

//convertion caculation
cout << "Value you enter is: " << d << " days" << endl;
cout << "number of Weeks: " << d/7 << " Week" << endl;
cout << "Approx number of Month: " << d/30 << " Months" << endl;
cout << "Approx number of Year: " << d/365 << " Year" << endl;

return 0;
}
