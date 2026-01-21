#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> even, odd;
        bool flag = false;
        int element;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }

        if (a[0] == 1 && n > 1) {
            cout << a[0] << " " << a[n - 1] << endl;
            continue;
        }

        if (even.size() >= 2) {
            cout << even[0] << " " << even[even.size() - 1] << endl;
            continue;
        }

        if (odd.size() >= 2) {
            for (int i = 1; i < odd.size(); i++) {
                int temp = odd[i] % odd[0];
                if (temp % 2 == 0) {
                    element = odd[i];
                    flag = true;
                    break;
                }
            }
            
            if (flag) {
                cout << odd[0] << " " << element << endl;
                continue;
            }
        }

        for (int i = 1; i < n; i++) {
            int temp = a[i] % a[0];
            if (temp % 2 == 0) {
                element = a[i];
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << a[0] << " " << element << endl;
            continue; 
        }

        cout << -1 << endl;
    }
    return 0;
}