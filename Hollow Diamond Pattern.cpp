#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 3;
    int a = 3;

    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= ((n / i) + 1) && j <= ((n / 2) + i - 1))
            {
                cout << "\t";
            }
            else
            {
                cout << "*"
                     << "\t";
            }
        }
        cout << endl;
    }
    for (int i = n / 2 + 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j == k && j < ((2 * (n - i) - 1) + a))
            {
                cout << "\t";
                k++;
            }
            else
            {
                cout << "*"
                     << "\t";
            }
        }
        a++;
        k = a;
        cout << endl;
    }

    return 0;
}
