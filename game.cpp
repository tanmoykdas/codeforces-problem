#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    if (n % 2 == 0)
    {
        cout << "Malvika";
    }

    else
    {
        cout << "Akshat";
    }
}