#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index,min;
    min = *min_element(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            index = i + 1;
            //cout << i << endl;
        }
    }
    sort(a, a + n);
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == min)
            c++;
    }
    if (c == 1)
    {
        // cout << c << " " << min << endl;
        cout << index;
    }
    else
    {
        cout << "Still Rozdil";
    }
}