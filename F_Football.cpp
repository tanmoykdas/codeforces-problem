#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int sum1 = 0, sum2 = 0, c = 0;
    vector<int> fi, sc;
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            // cout << "final" << endl;
            // cout << a - sum1 << ":" << b - sum2 << endl;
            fi.push_back(a - sum1);
            sc.push_back(b - sum2);
            if (a - sum1 == b - sum2) c++;
        }
        else
        {
            // cout << "sum" << sum1 << ":" << sum2 << endl;
            // Check if alternating would cause a draw in last match
            if (sum1 < a && sum2 < b && (a - sum1 - 1) != (b - sum2 - 1))
            {

                if (i % 2 == 0)
                {
                    // cout << "1:0" << endl;
                    fi.push_back(1);
                    sc.push_back(0);
                    sum1 += 1;
                }
                else
                {
                    // cout << "0:1" << endl;
                    fi.push_back(0);
                    sc.push_back(1);
                    sum2 += 1;
                }
            }
            else if (sum1 < a && sum2 < b)
            {
                // Would cause draw in last match, so use 0:0 now
                fi.push_back(0);
                sc.push_back(0);
                c++;
            }
            else
            {
                if (sum2 < b)
                {
                    // cout << "0:1" << endl;
                    fi.push_back(0);
                    sc.push_back(1);
                    sum2 += 1;
                }
                else if (sum1 < a)
                {
                    // cout << "1:0" << endl;
                    fi.push_back(1);
                    sc.push_back(0);
                    sum1 += 1;
                }
                else
                {
                    // cout << "0:0" << endl;
                    fi.push_back(0);
                    sc.push_back(0);
                    c++;
                }
            }
        }
    }
    cout << c << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fi[i] << ":" << sc[i] << endl;
    }
    return 0;
}