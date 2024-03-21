#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        int sum=0,c=0;
        for(int j=n-1;j>=0;j--)
        {
            sum-=a[j];
            for(int k=j;k>=0;k--)
            {
                sum+=a[k];
                if(a[j]==sum)
                {
                    c++;
                    sum=0;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
}