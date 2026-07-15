#include <iostream>
using namespace std;
int main()
{
    int start, end, i, j, prime;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    cout << "Prime numbers are: ";
    for(i = start; i <= end; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                prime++;
            }
        }

        if(prime==2)
            cout << i << " ";
    }
   cout << endl;
    return 0;
}
