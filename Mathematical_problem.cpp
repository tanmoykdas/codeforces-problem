#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = INT_MAX;
        vector<int> v;
        for(int i = 0; i < n - 1; i++){
            int temp = ((s[i] - '0') * 10) + (s[i + 1] - '0');
            for(int j = 0; j < n; j++){
                if(j != i && j != i + 1 && j != '1'){
                    temp = min({(s[j] - '0') * temp, (s[j] - '0') + temp});
                }
            }
            sum = min(sum, temp);
        }
        cout << sum << endl;
    }
}