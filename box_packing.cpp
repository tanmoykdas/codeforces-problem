#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    map<int,int> a;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        //if(a[b]==0)
        a[b]++;
        if(a[b]>m)
        m=a[b];
    }
    cout<<m;
}