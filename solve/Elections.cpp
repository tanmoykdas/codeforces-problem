#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(max(b,c) >= a)
        cout << (max(b,c) - a) + 1 << " ";
        else
        cout <<  0 << " ";

        if(max(a,c) >= b)
        cout << (max(a,c) - b) + 1 << " ";
        else
        cout <<  0 << " ";

        if(max(b,a) >= c)
        cout << (max(b,a) - c) + 1 << " ";
        else
        cout <<  0 << " ";

        cout << endl;
    }
}