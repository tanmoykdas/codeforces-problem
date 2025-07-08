 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int a,b=0,j=0;
    a=(n/k)*t;
    for(int i=1;i<=a;i++)
    {
        if(i%t==0)
        b+=k;
        if(i%d==0)
        {
            j++;
            if(j>1)
            {
                b+=k;
            }
        }
        if(b>=a) 
        break;
        i++;
    }
    //cout<<(n/k)<<endl;
    cout<<b;
}