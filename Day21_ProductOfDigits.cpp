#include <iostream>
using namespace std;
int main()
{
    int num, digit;
    long long product = 1;
    cout << "Enter a number: ";
    cin >> num;
    while(num != 0)
    {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    cout << "Product of digits = " << product << endl;
    return 0;
}
