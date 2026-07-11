#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, reverse = 0, remainder;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reverse)
        cout << originalNum << " is a Palindrome Number." << endl;
    else
        cout << originalNum << " is not a Palindrome Number." << endl;
    return 0;
}
