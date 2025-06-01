#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<int> v1, v2;
    for (int i = a; i <= x; i++)
    {
        v1.push_back(i);
    }
    for (int i = b; i <= y; i++)
    {
        v2.push_back(i);
    }
    int c = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            
            if (v1[i] > v2[j])
            {
                c++;
            }
        }
    }
    if (!c)
        cout << 0;
    else
    {
        cout << c << endl;
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v2.size(); j++)
            {
                if (v1[i] > v2[j])
                {
                    cout << v1[i] << " " << v2[j] << endl;
                }
            }
        }
    }
    return 0;
}