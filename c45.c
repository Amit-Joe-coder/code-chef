#include <stdio.h>
// void chances(int, int);
int main()
{
    int t, y, x;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d %d", &x, &y);
        // chances(x, y);
        y = y + x;
        if (y % 2 == 0)
        {
            printf("Janmansh");
        }
        else
            printf("Jay");
        t--;
    }
    return 0;
}
