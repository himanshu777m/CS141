#include <iostream>
using namespace std;     //librarty

int main()               //function
{
       cout << "Hello\n";

// Declaring variables
int a,b;
int sum,diff,mult,div,mod;
a = 8;
b = 2;

sum = a + b;
diff = a - b;
mult = a * b;
div = a / b;
mod = a % b;

// Displaying the result of variables
cout << "Sum of a and b is " << sum << endl;
cout << "Diffrance of a and b is " << diff << endl;
cout << "Multiplication of a and b is " << mult << endl;
cout << "Division of a and b is " << div << endl;
cout << "Modulus of a and b is " << mod << endl;

return 0;
}
