#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(auto& x:a) cin >> x;
        sort(a, a+n);
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        bool con = true;
        int operation = 0, c = 0;
        for(int i = 0; i < n - 1; i += 2)
        {
            //cout << a[i] << " " << a[i + 1] << endl;
            if(a[i] != a[i + 1])
            {
                int temp = (max(a[i], a[i + 1]) - min(a[i], a[i + 1]));
                //cout << temp << " ";
                if(temp % k == 0)
                operation += temp;
                else
                c++;
            }
            if(c >= 2)
            con = false;
        }
        // if(!con)
        // cout << -1 << endl;
        // else 
        // cout << operation << endl;
    }
    return 0;
}