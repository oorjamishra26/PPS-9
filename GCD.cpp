#include <iostream>

using namespace std;

int gcd (int num1, int num2)           // Fuction Defination
{
    if (num1 == 0)
    return num2;
    
    if (num2 == 0)
    return num2;
    
    if (num1 == num2)
    return num1;
    
    if (num1 > num2)
    return gcd(num1 - num2, num2);      // Recursive Call
    
    return (num1, num2 - num1);
}

int main ()
{
    int a, b;
    cout << "Enter two numbers to find there Greatest Common Divisor" << endl;
    cout << "Enter Number 1 - ";
    cin >> a;
    cout << "Enter Number 2 - ";
    cin >> b ;
    
    cout << "Greatest Common Divisor is "<< gcd(a, b);      // Function Call
    return 0;
}
