#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        int s = n-i-1;
        while(s>0)
        {
            cout<<" "<<" ";
            s--;
        }
        int c = 1;
        cout<<c<<" "<<" "<<" ";
        for(int j = 1; j<=i; j++)
        {
            c = c * (i-j+1)/j;
            cout<<c<<" "<<" "<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
