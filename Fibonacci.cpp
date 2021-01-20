#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1 = 0;
    int n2 = 1;
    int n3 = n1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (n1 == 0)
            {
                cout << n1 << "\t";
                n1 = n2;
            }

            else if (n2 == 1)
            {
                cout << n2 << "\t";
                n2 = n2 + n3; 
                n3 = n1;
            }

            else
            {
                cout << n2 << "\t";
                n3 = n2;
                n2 = n2 + n1;
                n1 = n3;
                
            }
        }
        cout << endl;
    }

    return 0;
}
