#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n % 10;
    if(temp % 2 == 0)
    {
        cout << 4 << " " << n - 4;
    }
    else
    {
        cout << n - 9 << " " << 9;
    }
}