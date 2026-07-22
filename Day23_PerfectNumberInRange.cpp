#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    for(int num = start; num <= end; num++)
    {
        int sum = 0;
        for(int i = 1; i <= num / 2; i++)
        {
            if(num % i == 0)
                sum += i;
        }
        if(sum == num && num != 0)
            cout << num << " ";
    }
  cout << endl;
    return 0;
}
