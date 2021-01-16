#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 1;
    int i;
    for (i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = (n - ((2 * i) - 1)); j > 0; j--)
        cout << " ";

        int l = i;
        while (l > 0)
        {
            cout << l;
            l--;
        }
        if (i > 1)
        {
            int k = s;
            while (k--)
            {
                cout << " ";
            }
            s = s + 2; //2-3 3-5 4-7
            for (int z = 1; z <= i; z++)
            {
                cout << z;
            }
        }
        cout << endl;
    }
    s = s-2;

    for (i = (n / 2) + 2; i <= n; i++)

    {
        for (int j = ((2 * i) - n - 1); j > 0; j--)
        {
            cout << " ";
        }
        int k = (n - i) + 1;
        int a = k;
        if (i != n)
        {
            while (a > 0)
            {
                cout << a;
                a--;
            }
        }
        int p = s - 2;
        while (p > 0)
        {
            cout << " ";
            p--;
        }
        s = s - 2;
        for (int l = 1; l <= k; l++)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}
