#include<bits/stdc++.h>
using namespace std;
int n, a[100];
bool check(int i, int sum) {
    if(i == n) return sum % 360 == 0;
    return check(i + 1, sum + a[i]) || check(i + 1, sum - a[i]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int sum = 0, i = 0;
    if(check(0, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}

// Solution 2

/*
#include<bits/stdc++.h>
using namespace std;
int n, a[100];
int dp[100][3000];
bool check(int i, int sum) {
    if(i == n) return sum % 360 == 0;
    if(dp[i][sum] != -1) return dp[i][sum];
    return dp[i][sum] = check(i + 1, sum + a[i]) || check(i + 1, sum - a[i]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int sum = 0, i = 0;
    if(check(0, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}
*/

// Solution 3

/*
#include<bits/stdc++.h>
using namespace std;
int n, a[100];
 void check(int i, int sum) {
    if(i == n && sum % 360 == 0) {
        cout << "YES";
        exit(0);
    }
    if(i == n) return;
    check(i + 1, sum + a[i]);
    check(i + 1, sum - a[i]);

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int sum = 0, i = 0;
    check(0, 0);
    cout << "NO";
    return 0;
}
*/