#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int power = 0;
    int sum = 0;
    int no = n;
    while(no>0)
    {
        no=no/10;
        power++;
    }
    power--;
    while(n>0)
    {
        int r = n%10;
        sum = sum + r*pow(10,power);
        n = n/10;
        power--;

    }
    cout<<sum;
   
    
    return 0;
}
