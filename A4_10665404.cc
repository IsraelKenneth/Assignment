#include <iostream>

using namespace std;
// GCD (Greatest Common Divisor) also called the greatest common factor, of two numbers is the largest number that divides them both
int main()
{

    int m, n;

    cout << "Enter first number: ";
    cin >> m;
    cout << "Enter second number: ";
    cin >> n;

    int mn = min(m,n);
    int GCD = 1;
    for(int i = 1; i<=mn; i++)
    {
        if(m%i==0 && n%i==0);
        {
            GCD = max(GCD, i);
        }
    }
    cout << "Greater Common Divisor is: " << GCD;
    return 0;
}
