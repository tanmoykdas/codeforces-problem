#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = n/2; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for(int j = 1; j <= k; j++)
        {
            cout<<"D";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        k += 2;
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"D";
    }
    cout<<endl;
    k -= 2;
    for (int i = 1; i <= (n/2); i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for(int j = 1; j <= k; j++)
        {
            cout<<"D";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        k -= 2;
        cout << endl;
    }
}