#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        int l;
        l = a[1]+a[0];
        //cout<< l <<endl;
        int c = 0;
        if(m <= 2)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        for (int j = 1; j < m-1; j++)
        {
            if(a[j]+a[j+1]==l)
            {
                continue;
            }
            else
            {
                cout<<"No"<<endl;
                c++;
                break;
            }
        }
        if(c!=0)
        {
            cout<<"Yes"<<endl;
        }
    }
}
