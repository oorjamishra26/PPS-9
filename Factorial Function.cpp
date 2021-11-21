#include <iostream>

using namespace std;

int factorial(int num)           // Function Declaration
{
    int factorial = 1;
    for (int x = 1; x <= num; x++)           // Function Defination
    {
        factorial *= x;
    }
    return factorial;
}
int main(void)
{
    int num;
    cout << "Enter a number to find the factorial ";
    cin >> num;
    
    num = factorial(num);             // Function Call
    
    cout << "The facotorial is " << num;
    return 0;
}