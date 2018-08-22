//program to enter marks of five subjects and calculate total, average and percentage. 

//include library
#include <iostream>                //stringstream
using namespace std;

//including function
int main()
{

//decaring the variable
int a,b,c,d,e,t;


//asking for input  and   reading the input for variable
cout << "\n";
cout << "Calculate total, average and percentage of five subject. \n";
cout << "Enter Marks: ";
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;
cout << "Enter Maximum mark per subject: ";
cin >> t;


//convertion caculation
cout << "\n";
cout << "Your total Marks is: " << a+b+c+d+e << endl;
cout << "Your average: " << (a+b+c+d+e)/5 << endl;
cout << "\n";
cout << "Your Percentage: " << (a+b+c+d+e)*100/(t*5) << endl;
cout << "\n";


return 0;
}
