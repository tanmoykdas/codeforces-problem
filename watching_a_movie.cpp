#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int st = 1, et = 0;
    int tt = 0;
    int t1, t2;
    cin >> t1 >> t2;
    if((t1 - st) % m == 0)
    tt += 0;
    else
    tt += ((t1 - st) - (((t1 - st) / m) * m));
    tt += ((t2 - t1) + 1);
    int temp = t2 + 1;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t1 >> t2;
        if(t1 - temp % m == 0)
        tt += 0;
        else
        tt += ((t1 - temp) - (((t1 - temp) / m) * m));
        tt += ((t2 - t1) + 1);
        temp = t2 + 1;
    }
    cout << tt;
    return 0;
}