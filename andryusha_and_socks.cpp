#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,a,m=0;
    cin>>n;
    set<int> b;
    for (size_t i = 0; i < 2*n; i++)
    {
        cin>>a;
        if(i<1)
        {
            b.insert(a);
            count++;
        }
        else
        {
            if(b.count(a)==1)
            {
                count--;
            }
            else
            {
                b.insert(a);
                count++;
            }
        }
        if(m<=count)
            m=count;
    }
    cout<<m;
}