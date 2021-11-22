#include <iostream>

using namespace std;

int factorial (int num)
{
    int factorial = 1;
    for (int x = 1; x <= num; x++)           //  Factorial Function Defination
    {
        factorial *= x;
    }
    return factorial;
}

int series(int y)                         // Series Function Defination
{
    int num = 1;
    for (int i = 1; i<= y; i++)
    {
        num += factorial(i)/i;           // Factorial Function Call
    }
    return num;
}
int main ()
{
    int terms;
    cout << "Enter the number of terms to find of the series 1!/1 + 2!/2 + 3!/3.... ";
    cin >> terms;
    
    terms = series(terms);             // Series Function Call
    
    cout << terms;
    return 0;
}
