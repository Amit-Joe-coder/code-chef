#include <stdio.h>
int main()
{
    int a, t;
    scanf("%d",&t);
    while (t)
    {
        scanf("%d", &a);
        if (a >= 67 && a <= 4500)
        {
            printf("Yes");
        }
        else
            printf("No");
        t--;
    }
}
