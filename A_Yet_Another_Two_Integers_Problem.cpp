#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        /* code */

        int a,b;
        cin>>a>>b;

        int x=abs(a-b);

        int d=x/10 + (x%10!=0);

        cout<<d<<endl;
    }
    
}