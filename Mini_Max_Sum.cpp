#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[20];
    int i;
    long long sum1=0,sum2=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        sort(a,a+5);
    }
    for(i=0;i<5-1;i++)
    {
        sum1=sum1+a[i];

    }
    for(i=1;i<5;i++)
    {
        sum2=sum2+a[i];
    }
    cout<<sum1<<" "<<sum2;
}
