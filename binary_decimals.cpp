#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m, e = 0;
        cin >> n;
        m = n;
        while (m != 0)
        {
            int temp;
            temp = m % 10;
            if (!(temp == 0 || temp == 1))
                e++;
            m /= 10;
        }
        if (e == 0)
            cout << "YES" << endl;
        else
        {
            int result;
            while (true)
            {
                if (n % 10 == 0)
                {
                    n = n / 10;
                }
                else if (n % 11 == 0)
                {
                    n = n / 11;
                }
                else if (n % 101 == 0)
                {
                    n = n / 101;
                }
                else if (n % 1001 == 0)
                {
                    n = n / 1001;
                }
                else if (n % 1011 == 0)
                {
                    n = n / 1011;
                }
                else if (n % 1101 == 0)
                {
                    n = n / 1101;
                }
                else if (n % 111 == 0)
                {
                    n = n / 111;
                }
                else if (n % 1111 == 0)
                {
                    n = n / 1111;
                }
                else
                {
                    result = n;
                    break;
                }
            }
            // cout << result << " ";
            if (result == 0 || result == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}