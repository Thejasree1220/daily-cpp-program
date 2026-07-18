#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, digit, i;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    for(num;num;num=num/10)
    {
        digit = num % 10;
        int factorial = 1;
        for (i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
    }
    if (sum == originalNum)
        cout << originalNum << " is a Strong Number." << endl;
    else
        cout << originalNum << " is not a Strong Number." << endl;
    return 0;
}
