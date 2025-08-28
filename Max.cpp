#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long max=-1;
    /*শুরুতে maximum কে একটা ছোট মান দিয়ে initialize করো, যেমন -1 (কারণ constraint বলছে সব সংখ্যা ≥ 0 হবে)।

long long mx = -1;
*/

    for(int i=0; i<n ;i++)
    {
        long long x;
        cin>>x;

        if(x>max)
            max=x;
    }
    cout<<max;
}
