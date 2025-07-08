#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(c/b<=a && c%b==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}