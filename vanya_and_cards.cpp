#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    sum = abs(sum);
    int c = 0;
    while(1)
    {
        if(sum > k)
        {
            sum -= k;
            c++;
        }
        if(sum == k )
        {
            sum = 0;
            c++;
        }
        if(sum < k && sum != 0)
        {
            sum = 0;
            c++;
        }
        if(sum == 0)
        {
            cout << c;
            return 0;
        }
    }
}