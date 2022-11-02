#include <stdio.h>
int main()
{
    int t, x, y, i, j, sum;
    scanf("%d", &t);
    while (t)
    {
        printf("enter the value: \n");
        scanf("%d %d", &x, &y);
        i = x / y;
        j = x % y;
        sum = i + j;
        printf("Minimum moves are %d\n",sum);
        t--;
    }
}
