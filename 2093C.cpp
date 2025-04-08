#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
    
        if(n > 1 && x > 1) cout << "NO" << endl;
        else if(n > 1 && x == 1){
            if(isprime(n)) cout << "YES" << endl;
            else cout << "NO" << endl; 
        } else if(n == 1 && x == 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}