#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*bool cmp(pair<int,string> a,pair<int,string> b){
    if(a.first<b.first)
     return false;
    else return true; 
}*/
int main() {
    pair<int,string> p[5];
    p[0]={89,"nazmul"};
    p[1]={81,"tanvir"};
    p[2]={78,"mamun"};
    p[3]={92,"senarul"};
    p[4]={99,"tanjil"};
    sort(p.begin(),p.end());
    for (size_t i = 0; i < 5; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
}