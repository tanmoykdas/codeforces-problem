#include<iostream>
using namespace std;
main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long m;
    cin>>m;
    long long b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    long long sum1=0,sum2=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            sum1+=j+1;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(b[i]==a[j]) {
            sum2+=1;
            break;
            }
            else
            sum2+=1;
        }
    }
    cout<<sum1<<" "<<sum2;
}