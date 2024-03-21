#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = k * l;
    int b = c * d;

    int x = a / (n * nl);
    int y = b / n;
    int z = p / (n * np);

    int ans = min(min(x, y), z);
    cout << ans << endl;

    return 0;
}
