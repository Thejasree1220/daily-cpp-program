#include <iostream>
using namespace std;
void main()
{
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for(num;num;num=num/10)
    {
        sum += num % 10;
    }
    cout << "Sum of digits = " << sum << endl;
    return 0;
}
