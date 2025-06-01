#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int c = 0;
        int j = 0, k = 0;
        set<int> a;
        int x;
        while (1)
        {
            if (s[j] == 'A' && s[j + 1] == 'B')
            {
                x = a.count(j);
                if (x == 1)
                    c+=0;
                else
                {
                    swap(s[j],s[j+1]);
                    c++;
                    k++;
                    a.insert(j);
                }
            }
            if (j == (m - 2))
            {
                j = -1;
                if (k == 0)
                    break;
                else
                    k = 0;
            }
            j++;
           //cout << s << endl;
        }
        cout << c << "\n";
    }
}