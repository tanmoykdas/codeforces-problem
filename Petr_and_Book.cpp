#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[7];
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    //cout << sum << endl;
    int week = n;
    for (int i = 0; i < n; i++)
    {
        if (week > sum)
        week = week - sum;
        else
        break;
    }
    //cout << week << endl;
    int day = 0;
    for (int i = 0; i < 7; i++)
    {
        day += a[i];
        if(day >= week)
        {
            cout << i + 1;
            return 0;
        }
    }
}