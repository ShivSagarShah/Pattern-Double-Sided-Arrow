#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= (n - i); j--)
            cout << j;
        if (i != n)
        {
            for (int k = ((2 * n) - ((2 * i) + 1)); k > 0; k--)
                cout << " ";

            for (int l = n - i; l <= n; l++)
                cout << l;
        }
        if (i == n)
        {
            for (int l = 1; l <= n; l++)
                cout << l;
        }

        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > (n - i); j--)
            cout << j;

        for (int k = ((2 * n) - (2 * i) + 1); k > 0; k--)
            cout << " ";

        for (int l = (n - i) + 1; l <= n; l++)
            cout << l;

        cout << endl;
    }

    return 0;
}
