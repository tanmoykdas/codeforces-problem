#include <stdio.h>

int main()
{
    int n, i, c = 0;
    char a, b;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf(" %c", &a);
        if (i >= 1)
        {
            if (a == b)
            {
                c++;
            }
        }
        b = a;
    }
    printf("%d", c);
    return 0;
}