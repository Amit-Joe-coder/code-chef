#include <stdio.h>
int main()
{
    int a, b, t;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d %d", &a, &b);
        if (a != b)
        {
            if (a > b)
            {
                printf("A");
            }
            else
                printf("B");
        }
        t--;
    }
    return 0;
}
