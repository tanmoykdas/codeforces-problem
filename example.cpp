#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int>> v;
    v.push_back(make_pair("tanmoy",21));
    v.push_back(make_pair("Nazmul",11));
    v.push_back(make_pair("Na",10));
    pair<int,pair<int,string>> t;
    t.first=1;
    t.first.first=2;
    t.first.second="luka"
    //t=(make_pair(1,("luka",2)))
    cout<<t.first<<t.first.first<<t.first.second;
    for (size_t i = 0; i < 3; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    
}