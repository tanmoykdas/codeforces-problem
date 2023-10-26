#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int c = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if(i%2 == 0)
            {
                if(j%2 == 0)
                c++;
            }
            else
            {
                if(j%2 != 0)
                c++;
            }
        }
    }
    cout << c << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if(i%2 == 0)
            {
                if(j%2 == 0)
                cout << "C";
                else
                cout << ".";
            }
            else
            {
                if(j%2 != 0)
                cout << "C";
                else
                cout << ".";
            }
        }
        cout << endl;
    }
}