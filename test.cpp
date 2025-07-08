#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,k;
        cin>>a>>k;
        int b[a],c=0;
        for(int i=0;i<a;i++)
        {
            cin>>b[i];
            if(b[i]==k)
            c++;
        }
        if(c>=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}