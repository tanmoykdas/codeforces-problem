#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    int cn1 = 0, cn2 = 0, cn3 = 0;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        cn1++;
    }

    for (int i = 0; i < b.length(); i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        cn2++;
    }

    for (int i = 0; i < c.length(); i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        cn3++;
    }
    if(cn1 == 5 && cn2 == 7 && cn3 == 5)
    cout << "YES";
    else
    cout << "NO";
}
