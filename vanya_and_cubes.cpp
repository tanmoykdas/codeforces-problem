#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1, tsum = 0, c = 0;
    while (1)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        if(tsum+sum<=n)
        {
            tsum+=sum;
            c++;
        }
        else
        {
            cout<<c;
            return 0;
        }
        i++;
    }
}