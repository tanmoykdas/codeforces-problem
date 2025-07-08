#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    int count = 0, count1 = 0;
    scanf("%s", &a);
    for (size_t i = 0; a[i] != 0; i++)
    {

        if (a[i] >= 97)
            count++;
        else
            count1++;
    }
    if (count >= count1)
        strlwr(a);
    else
        strupr(a);
    printf("%s", a);
}
