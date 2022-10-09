#include <stdio.h>
int main()
{
    int t, x, y, z, k;
    scanf("%d",&t);
    while (t)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x < z)
        {
            k = z / y;
            if (k < x)
            {
                printf("%d\n", k);
            }
            else
                printf("%d\n", x);
        }
        else
            printf("0\n");
        t--;
    }
}
