#include <iostream>

using namespace std;

int armstrong(int num)
{
    int x, sum = 0, digit;
    x = num;
    
    while (x != 0)
    {
        digit = x % 10;
        sum += (digit * digit * digit);
        x = x/10;
    }
    if (sum == num)
    cout << "Entered number is an Armstrong Number";
    
    else 
    cout << "Entered number is not an Armstrong Number";
    return 0;
}
int main ()
{
    int a;
    cout << "Enter a number to check if it is an Armstrong number or not ";
    cin >> a;
    armstrong (a);
}