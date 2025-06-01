#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int a,d=0,max=0;
        cin>>a;
        for (size_t j = 0; j < a; j++)
        {
            
            int b,c;
            cin >> b >> c;
            if(j==0)
            {
                if(c>2 && c%2==0)
                {
                    max=b+((c/2)-1);
                }
                else if(c>2 && c%2!=0)
                {
                    max=b+(c/2);
                }
                else
                {
                    max=b;
                }
                d=max;
                //cout<<d<<endl;
            }
            else
            {
                if(c>2 && c%2==0)
                {
                    max=b+((c/2)-1);
                }
                else if(c>2 && c%2!=0)
                {
                    max=b+(c/2);
                }
                else
                {
                    max=b;
                }
                if(max<d)
                d=max;
                //cout<<d<<endl;
            }
        }
        cout<<d<<endl;
    }
}