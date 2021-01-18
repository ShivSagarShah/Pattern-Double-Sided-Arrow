#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i=<n/2; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i == 1)
            {
                if(j == 1 || j>= ((n/2)+1))
                cout<<"*";
                else
                cout<<" ";                             
                
            }
            else
            {
                if(j == 1 || j == ((n/2)+1))
                cout<<"*";
                else
                cout<<" ";
                             
            }
            
        }
       
        cout<<endl;
    }
    int p = n;
    while(p--)
    cout<<"*";
    cout<<endl;
    for(int i = ((n/2)+2); i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i != n)
            {
                if(j == ((n/2)+1) || j == n)
                cout<<"*";
                else
                cout<<" ";                             
                
            }
            else
            {
                if(j <= ((n/2)+1) || j == n)
                cout<<"*";
                else
                cout<<" ";
                             
            }
            
        }
       
        cout<<endl;
    }

    
    return 0;
}
