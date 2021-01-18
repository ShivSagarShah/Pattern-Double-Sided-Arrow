#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;
        if (p > 0)
        {
            for (int k = 1; k <= ((2 * p) - 1); k++)
                cout << " ";

            p = p - 1;
        }
        if (i != n)
        {

            for (int a = i; a >= 1; a--)
                cout << a;
        }
        if(i==n)
        {
            for (int a = i-1; a >= 1; a--)
                cout << a;

        }
        cout << endl;
    }

    return 0;
}
