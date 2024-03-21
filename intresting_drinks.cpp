#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long a;
    set<long> s;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a;
        s.insert(a);
    }
    long m,b,*c;
    cin>>m;
    for (size_t i = 0; i < m; i++)
    {
        cin>>b;
        if(s.count(b)==1)
        {
            cout<<s.find(b)<<endl;
        }
        else
        cout<<"0"<<endl;
    }
}