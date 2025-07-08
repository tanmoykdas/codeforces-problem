#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[3], sum = 0, c = 0, d = 0;
    vector<int> v;

    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    if ((a[0] + a[1] + a[2]) == n)
        v.push_back(3);
    if (n % a[0] == 0)
        v.push_back(n / a[0]);

    if (n % a[1] == 0)
        v.push_back(n / a[1]);

    if (n % a[2] == 0)
        v.push_back(n / a[2]);

    int m = n;

    while (n > 0)
    {
        n -= a[1];
        c++;
        // cout << n << " " << c << endl;
        if (n > 0 && n % a[0] == 0)
        {
            d = n / a[0];
            break;
        }
    }
    // cout << d << " " << c << endl;
    if (d != 0)
        v.push_back(c + d);

    n = m;
    c = 0;
    d = 0;

    while (n > 0)
    {
        n -= a[2];
        c++;
        if (n > 0 && n % a[0] == 0)
        {
            d = n / a[0];
            break;
        }
    }
    if (d != 0)
        v.push_back(c + d);

    n = m;
    c = 0;
    d = 0;

    while (n > 0)
    {
        n -= a[2];
        c++;
        if (n > 0 && n % a[1] == 0)
        {
            d = n / a[1];
            break;
        }
    }
    if (d != 0)
        v.push_back(c + d);

    n = m;
    c = 0;
    d = 0;
    while(n > 0)
    {
        if(n > a[0])
        {
            n -= a[0];
            c++;
        }
        if(n == a[1] || n == a[2])
        {
            n = 0;
            c ++;
        }
        if(n < a[0] && n != 0)
        d++;
    }
    if(d == 0)
    v.push_back(c);

    n = m;
    c = 0;
    d = 0;
    while(n > 0)
    {
        if(n > a[2])
        {
            n -= a[2];
            c++;
        }
        if(n == a[1] || n == a[0])
        {
            n = 0;
            c ++;
        }
        if(n < a[0] && n != 0)
        d++;
    }
    cout << c;
    if(d == 0)
    v.push_back(c);

    n = m;
    c = 0;
    d = 0;
    while(n > 0)
    {
        if(n > a[1])
        {
            n -= a[1];
            c++;
        }
        if(n == a[0] || n == a[2])
        {
            n = 0;
            c ++;
        }
        if(n < a[0] && n != 0)
        d++;
    }
    if(d == 0)
    v.push_back(c);

    int ans;
    ans = *max_element(v.begin(), v.end());

    //cout << ans;
}