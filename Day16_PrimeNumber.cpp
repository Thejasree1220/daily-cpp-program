#include <iostream>
using namespace std;
int main()
{
    int num,i,prime=0;
    cout << "Enter a positive integer: ";
    cin >> num;
        for ( i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                prime++;
            }
        }
    if (prime==2)
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is not a Prime Number." << endl;
    return 0;
}
