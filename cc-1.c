#include <stdio.h>
int main()
{
    int t, x, y, z, i, j;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d %d %d", &x, &y, &z);
        i = x * y;
        j = x + z;
        printf("%d ", i < j ? i : j);
        t--;
    }
}
