#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> a;
    int x;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        a.insert(x);
    }
    auto it=a.begin();
    //cout<<a.size();
    if(a.size()>=2)
    cout<<*++it;
    else
    cout<<"NO";
}