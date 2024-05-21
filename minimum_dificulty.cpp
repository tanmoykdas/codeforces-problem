#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    int min = 5000;
    if (n == 3)
    {
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i + 2] - a[i] < min)
                min = a[i + 2] - a[i];
        }
        cout << min;
    }
    else
    {
        int m = 5000;
        vector<int> v;
        int p = 1;
        for (int i = 0; i < n - 2; i++)
        {
            int max = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == p)
                    continue;
                else
                    v.push_back(a[j]);
            }
            cout << endl;
            for (int j = 1; j < v.size(); j++)
            {
                if (v[j] - v[j - 1] > max)
                    max = v[j] - v[j - 1];
            }
            if(max < m)
            m = max;
            p++;
            v.clear();
        }
        cout << m;
    }
    return 0;
}