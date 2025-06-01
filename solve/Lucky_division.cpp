#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string in;
    cin >> in;
    int c = 0;
    for(int i = 0; i < in.size(); i++){
        if(in[i] != '4' && in[i] != '7') c++;
    }
    if(c == 0){
        cout << "YES" << endl;
        return 0;
    }
    int n = stoi(in);
    vector<int> v;
    string s;
    for(int i = 0; i < 4; i++){
        if(i % 2) s += '7';
        else s += '4';
        sort(s.begin(), s .end());
        do{
            int temp = stoi(s);
            v.push_back(temp);
        }
        while(next_permutation(s.begin(), s.end()));
    }
    v.push_back(7);
    v.push_back(77);
    v.push_back(777);
    v.push_back(7777);
    v.push_back(44);
    v.push_back(444);
    v.push_back(4444);
    for(auto x : v){
        if(!(n % x)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}